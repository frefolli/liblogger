#include <liblogger/logger_channeled.hh>
#include <chrono>
#include <iomanip>
#include <iostream>

LoggerChanneled::LoggerChanneled(Severity level, Channel channel) : Logger(level), channel(channel) {}
LoggerChanneled::~LoggerChanneled() {}

void LoggerChanneled::log(Severity severity, std::string message) {
    if (severity <= level) {
        auto now = std::chrono::system_clock::now();
        auto tm = std::chrono::system_clock::to_time_t(now);
        std::cout << std::put_time(std::localtime(&tm), "%F %T")
            << " " << severity << " " << message << std::endl;
    }
}
