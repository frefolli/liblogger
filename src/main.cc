#include <liblogger/logger_multichannel.hh>
#include <liblogger/channel_ostream.hh>
#include <liblogger/severity.hh>
#include <iostream>

// ALL, TRACE, DEBUG, INFO, WARN, ERROR, FATAL, OFF


int main(int argc, char**args) {
    LoggerMultiChannel logger (DEBUG, {
        new ChannelOstream(),
        new ChannelOstream(),
        new ChannelOstream("/tmp/qualcosa.1.log"),
        new ChannelOstream("/tmp/qualcosa.2.log")
    });
    std::string line;
    while(true) {
        std::getline(std::cin, line);
        logger.log(TRACE, line);
    }
}
