#include <liblogger/logger.hh>
#include <liblogger/severity.hh>

// ALL, TRACE, DEBUG, INFO, WARN, ERROR, FATAL, OFF

std::string craftForLevel(Severity severity) {
    std::ostringstream out ("");
    out << "message on " << severity << " level";
    return out.str();
}

void log(Logger* logger, Severity severity) {
    logger->log(severity, craftForLevel(severity));
}

int main(int argc, char**args) {
    Logger logger (DEBUG);
    log(&logger, ALL);
    log(&logger, TRACE);
    log(&logger, DEBUG);
    log(&logger, INFO);
    log(&logger, WARN);
    log(&logger, ERROR);
    log(&logger, FATAL);
    log(&logger, OFF);
}
