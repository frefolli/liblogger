#include <liblogger/channel_ostream.hh>
#include <stdexcept>
#include <iostream>
#include <fstream>

ChannelOstream::ChannelOstream() {
    out = new std::iostream(std::cout.rdbuf());
}

ChannelOstream::ChannelOstream(std::string filepath) {
    out = new std::ofstream(filepath, std::ofstream::app);
}

ChannelOstream::~ChannelOstream() {
    delete out;
}

ChannelOstream& ChannelOstream::operator<<(std::string line) {
    *out << line << std::endl;
    out->flush();
    return *this;
}
