#include <liblogger/logger_channeled.hh>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <stdexcept>

LoggerChanneled::LoggerChanneled(Severity level, Channel* channel) : Logger(level), channel(channel) {
    if (!channel)
        std::runtime_error("InvalidArgumentException: channel is nullptr");
}

LoggerChanneled::~LoggerChanneled() {
    delete channel;
}

void LoggerChanneled::log(Severity severity, std::string message) {
    if (severity <= level) {
        auto now = std::chrono::system_clock::now();
        auto tm = std::chrono::system_clock::to_time_t(now);
        std::ostringstream out ("");
        out << std::put_time(std::localtime(&tm), "%F %T")
            << " " << severity << " " << message;
        *channel << out.str();
    }
}
