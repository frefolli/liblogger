#include <liblogger/channel_ajax.hh>
#include <libajax/ajax.hh>

ChannelAjax::ChannelAjax(std::string url) {
    builder = new RequestBuilder();
    builder->setMethod(POST);
    builder->addHeader("Content-Type", "application/json");
    builder->setUrl(url);
}

ChannelAjax::~ChannelAjax() {
    delete builder;
}

ChannelAjax& ChannelAjax::operator<<(std::string line) {
    builder->setData(line);
    Ajax::perform(builder->build());
    return *this;
}
