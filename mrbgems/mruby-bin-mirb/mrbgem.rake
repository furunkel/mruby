MRuby::Gem::Specification.new('mruby-bin-mirb') do |spec|
  spec.license = 'MIT'
  spec.author  = 'mruby developers'
  spec.summary = 'mirb command'

  if spec.build.cc.search_header_path 'readline/readline.h'
    spec.cc.defines << "ENABLE_READLINE"
    if spec.build.cc.search_header_path 'termcap.h'
        spec.linker.libraries << 'ncurses'
    end
    if RUBY_PLATFORM.include?('netbsd')
      spec.linker.libraries << 'edit'
    else
      spec.linker.libraries << 'readline'
    end
  elsif spec.build.cc.search_header_path 'linenoise.h'
    spec.cc.defines << "ENABLE_LINENOISE"
  end

  spec.bins = %w(mirb)
end
