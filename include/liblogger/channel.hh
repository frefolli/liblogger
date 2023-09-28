#ifndef LIBLOGGER_CHANNEL_HH
#define LIBLOGGER_CHANNEL_HH

#include <liblogger/severity.hh>
#include <string>

class Channel {
    public:
        Channel();
        virtual ~Channel();
        virtual Channel& operator<<(std::string line) = 0;
};


#endif
