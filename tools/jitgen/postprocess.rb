require_relative 'x86'

class As::Instruction
  def target_register?(reg = nil)
    target.is_a?(As::Register) && (!reg || reg.alias?(target))
  end

  def source_register?(reg = nil)
    source.is_a?(As::Register) && (!reg || reg.alias?(source))
  end
end

module Postprocess
  include As

  Processor = Struct.new :assembly do
    include As


    def asm
      assembly
    end

    def arch
      asm.arch
    end

    def remove_stack_spill!(reg)
      pop = asm.reverse_each_instruction.find do |inst|
        inst.name =~ /pop/ && inst.source_register?(reg)
      end
      pop.delete if pop

      push = asm.each_instruction.find do |inst|
        inst.name =~ /push/ && inst.source_register?(reg)
      end
      push.delete if push
    end

    def remove_bogus_stack_adds!
      add = asm.reverse_each_instruction.find do |inst|
        inst.name =~ /add/ &&
          Constant === inst.source &&
          inst.target_register? &&
          inst.target.alias?(X86::Register[:rsp])
      end

      if add
        sub = asm.each_instruction.find do |inst|
          inst.name =~ /sub/ && Constant === inst.source && inst.target.alias?(X86::Register[:rsp])
        end

        if sub
          raise unless sub.source == add.source
        else
          add.delete
        end
      end
    end

    def correct_stack!
      remove_bogus_stack_adds!
    end

    def process!
      remove_dummy_call!
      remove_return!
      correct_stack!
      handle_jit_enter!
    end

    def handle_jit_enter!
      insts = asm.each_instruction.select do |inst|
        inst.call? && Label === inst.source && inst.source.name == 'mrb_jit_enter'
      end

      insts.each do |inst|
        inst.rename! 'jmp'
      end

      unless insts.empty?
        max_stack_size = 512
        first_inst = asm.each_instruction.first
        inst0 = Instruction.new 'add', [Constant[max_stack_size - 1], X86::Register[:rsp].for_arch(arch)]
        inst1 = Instruction.new 'and', [Constant[-max_stack_size], X86::Register[:rsp].for_arch(arch)]
        first_inst.insert_before inst0
        first_inst.insert_before inst1
      end
    end

    def remove_dummy_call!
      func_label = asm.select{|e| Label === e && e.name =~ /op_/}.to_a.first
      call = asm.reverse_each_instruction.find do |inst|
        inst.name =~ /call/ && inst.source == func_label
      end
      if call
        call.delete
      end

      remove_stack_spill! X86::Register[:rax]
    end

    def remove_return!
      last_inst = asm.reverse_each_instruction.first
      label = Label.new '.LNEXT'
      last_inst.insert_after label

      asm.each do |inst|
        if Instruction === inst && inst.return?
          if inst.each_instruction.drop(1).first.nil?
            inst.delete
          else
            inst.replace Instruction.new('jmp', [label])
          end
        end
      end
    end
  end

  class OpJmpif < Processor
    def process!
      super
      asm.each_instruction do |inst|
        inst.delelte if inst.name =~ /(push|pop)/
      end

      asm.each_instruction.drop_while{|inst| !inst.x86_jump?}.each do |inst|
        inst.delete
      end

      #inst = asm.find{|e| As::Instruction === e && e.target && e.target.base.name == :rsp}
      #inst.delete if inst
    end
  end

  class OpJmpnot < OpJmpif
  end

  class OpReturn < Processor
    def process!
      super
      #remove_stack_spill! :rbx
      #remove_stack_spill! :rbp
      call = asm.reverse_each_instruction.find {|inst| inst.call?}
      #call.insert_before Instruction.new('addq', [Constant.new(512), X86::Register[:rsp]])
      #call.insert_before Instruction.new('andq', [Constant.new(-512), X86::Register[:rsp]])
      call.rename! 'jmp'
    end

    def insert_return!
      jmp_next = asm.reverse_each_instruction.find do |inst|
        inst.x86_jump? && inst.source == Label.new('.LNEXT')
      end
        
      if jmp_next
        jmp_next.replace As::X86::ReturnInstruction.new
      else
        # there is no jump nedded, e.g. because
        # default flow runs into next
        # add return as last instruction
        asm.reverse_each_instruction
           .take(1).to_a.first
           .insert_after As::X86::ReturnInstruction.new
      end
    end
  end

  class OpBreak < OpReturn
  end

  #FIXME: very unstable
  # breaks if LLVM output changes slightly
  class OpSend < Processor
    def process!
      super
      remove_stack_spill! X86::Register[:rbx]
      return
    end
  end

  class OpSendb < OpSend
  end

end
