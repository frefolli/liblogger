#ifndef LIBLOGGER_LOGGER_MULICHANNEL_HH
#define LIBLOGGER_LOGGER_MULICHANNEL_HH

#include <vector>
#include <string>
#include <liblogger/logger.hh>
#include <liblogger/logger_channeled.hh>
#include <liblogger/channel.hh>
#include <liblogger/severity.hh>

class LoggerMultiChannel : Logger {
    protected:
        std::vector<LoggerChanneled*> loggers;
    public:
        LoggerMultiChannel(Severity level, std::vector<Channel*> channels);
        ~LoggerMultiChannel();

        void log(Severity severity, std::string message);
};

#endif
