#ifndef LIBLOGGER_SEVERITY_HH
#define LIBLOGGER_SEVERITY_HH

#include <ostream>

enum Severity {
    ALL, TRACE, DEBUG, INFO, WARN, ERROR, FATAL, OFF
};

std::ostream& operator<<(std::ostream& out, Severity severity);

#endif
