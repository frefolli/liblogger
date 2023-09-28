#include <liblogger/channel_ostream.hh>

ChannelOstream::ChannelOstream(std::ostream out) : out(out) {}

ChannelOstream::~ChannelOstream() {}

ChannelOstream& ChannelOstream::operator<<(std::string line) {
    out << line << std::endl;
}
