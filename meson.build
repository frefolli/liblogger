project('liblogger', 'cpp', version: 'master')

include = include_directories('include')

libajax_dep = dependency(
  'libajax',
  fallback: ['libajax', 'libajax_dep'],
  version: 'master',
)

liblogger = library('liblogger', [
    'src/liblogger/logger.cc',
    'src/liblogger/logger_channeled.cc',
    'src/liblogger/logger_multichannel.cc',
    'src/liblogger/severity.cc',
    'src/liblogger/channel.cc',
    'src/liblogger/channel_ostream.cc',
    'src/liblogger/channel_ajax.cc'
  ], include_directories: include,
  dependencies: [libajax_dep])

main = executable('main.exe', [
    'src/main.cc',
  ], include_directories : include,
  link_with: liblogger,
  dependencies: [libajax_dep])

liblogger_dep = declare_dependency(
  include_directories : include,
  link_with : liblogger)
