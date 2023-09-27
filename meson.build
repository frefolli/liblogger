project('liblogger', 'cpp', version: 'master')

include = include_directories('include')

liblogger = library('liblogger', [
  ], include_directories: include)

main = executable('main.exe', [
    'src/main.cc',
  ], include_directories : include,
  link_with: liblogger)

liblogger_dep = declare_dependency(
  include_directories : include,
  link_with : liblogger)
