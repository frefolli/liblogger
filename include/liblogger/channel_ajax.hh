#ifndef LIBLOGGER_CHANNEL_AJAX_HH
#define LIBLOGGER_CHANNEL_AJAX_HH

#include <liblogger/severity.hh>
#include <liblogger/channel.hh>
#include <libajax/request_builder.hh>
#include <string>

class ChannelAjax : public Channel {
    protected:
        RequestBuilder* builder;
    public:
        ChannelAjax(std::string url);
        ChannelAjax();
        ~ChannelAjax();
        ChannelAjax& operator<<(std::string line);
};


#endif
