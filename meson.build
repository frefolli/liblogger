project('liblogger', 'cpp', version: 'master')

include = include_directories('include')

liblogger = library('liblogger', [
    'src/liblogger/logger.cc',
    'src/liblogger/logger_channeled.cc',
    'src/liblogger/logger_multichannel.cc',
    'src/liblogger/severity.cc',
    'src/liblogger/channel.cc',
    'src/liblogger/channel_ostream.cc'
  ], include_directories: include)

main = executable('main.exe', [
    'src/main.cc',
  ], include_directories : include,
  link_with: liblogger)

liblogger_dep = declare_dependency(
  include_directories : include,
  link_with : liblogger)
