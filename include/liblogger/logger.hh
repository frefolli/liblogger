#ifndef LIBLOGGER_LOGGER_HH
#define LIBLOGGER_LOGGER_HH

#include <string>
#include <sstream>
#include <liblogger/severity.hh>

class Logger {
    protected:
        Severity level;
    public:
        Logger(Severity level);
        virtual ~Logger();

        virtual void log(Severity severity, std::string message) = 0;

        template<typename Serializable>
        void log(Severity severity, Serializable serializable) {
            std::ostringstream rep ("");
            rep << serializable;
            this->log(severity, rep.str());
        }
};

#endif
