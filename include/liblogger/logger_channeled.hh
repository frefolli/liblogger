#ifndef LIBLOGGER_LOGGER_CHANNELED_HH
#define LIBLOGGER_LOGGER_CHANNELED_HH

#include <string>
#include <liblogger/severity.hh>
#include <liblogger/channel.hh>
#include <liblogger/logger.hh>

class LoggerChanneled : public Logger {
    protected:
        Channel* channel;
    public:
        LoggerChanneled(Severity level, Channel* channel);
        ~LoggerChanneled();

        void log(Severity severity, std::string message);
};

#endif
