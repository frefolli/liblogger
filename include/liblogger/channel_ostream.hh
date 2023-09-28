#ifndef LIBLOGGER_CHANNEL_OSTREAM_HH
#define LIBLOGGER_CHANNEL_OSTREAM_HH

#include <liblogger/severity.hh>
#include <liblogger/channel.hh>
#include <string>

class ChannelOstream : public Channel {
    protected:
        std::ostream out;
    public:
        ChannelOstream(std::ostream out);
        ~ChannelOstream();
        ChannelOstream& operator<<(std::string line);
};


#endif
