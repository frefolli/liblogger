#include <liblogger/logger.hh>
#include <chrono>
#include <iomanip>
#include <iostream>

Logger::Logger(Severity level) : level(level) {}
Logger::~Logger() {}

void Logger::log(Severity severity, std::string message) {
    if (severity <= level) {
        auto now = std::chrono::system_clock::now();
        auto tm = std::chrono::system_clock::to_time_t(now);
        std::cout << std::put_time(std::localtime(&tm), "%F %T")
            << " " << severity << " " << message << std::endl;
    }
}
