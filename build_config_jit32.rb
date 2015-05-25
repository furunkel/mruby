MRuby::Build.new do |conf|
  toolchain :clang
  conf.gembox 'default'

  compilers.each do |c|
    #c.defines += %w(MRB_NAN_BOXING)
  end
end

MRuby::Build.new('nojit_nob32') do |conf|
  toolchain :clang
  conf.gembox 'default'

  compilers.each do |c|
    c.flags << "-m32"
  end

  linker.flags << "-m32"
end

MRuby::Build.new('jit_nob32') do |conf|
  toolchain :clang
  conf.gembox 'default'

  compilers.each do |c|
    c.flags << "-m32"
    c.defines += %w(MRB_ENABLE_JIT)
  end

  linker.flags << "-m32"
end

MRuby::Build.new('jit_wordb32') do |conf|
  toolchain :clang
  conf.gembox 'default'

  compilers.each do |c|
    c.defines += %w(MRB_ENABLE_JIT)
    c.defines += %w(MRB_WORD_BOXING)
    c.flags << "-m32"
  end

  linker.flags << "-m32"
end

MRuby::Build.new('jit_nanb32') do |conf|
  toolchain :clang
  conf.gembox 'default'

  compilers.each do |c|
    c.defines += %w(MRB_ENABLE_JIT)
    c.defines += %w(MRB_NAN_BOXING)
    c.flags << "-m32"
  end

  linker.flags << "-m32"
end

