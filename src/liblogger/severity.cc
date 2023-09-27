#include <liblogger/severity.hh>

std::ostream& operator<<(std::ostream& out, Severity severity) {
    switch (severity) {
        case ALL: out << "ALL  "; break;
        case TRACE: out << "TRACE"; break;
        case DEBUG: out << "DEBUG"; break;
        case INFO: out << "INFO "; break;
        case WARN: out << "WARN "; break;
        case ERROR: out << "ERROR"; break;
        case FATAL: out << "FATAL"; break;
        case OFF: out << "OFF  "; break;
    }
    return out;
}
