#include <liblogger/logger_multichannel.hh>

LoggerMultiChannel::LoggerMultiChannel(Severity level, std::vector<Channel*> channels) : Logger(level) {
    for (Channel* channel : channels) {
        loggers.push_back(new LoggerChanneled(level, channel));
    }
}

LoggerMultiChannel::~LoggerMultiChannel() {
    for (LoggerChanneled* channel : loggers) {
        delete channel;
    }
}

void LoggerMultiChannel::log(Severity severity, std::string message) {
    for (LoggerChanneled* channel : loggers) {
        channel->log(severity, message);
    }
}
