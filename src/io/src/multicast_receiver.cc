#include "multicast_receiver.h"

namespace furgbol {
namespace io {
  MulticastReceiver::MulticastReceiver(std::string group_ip, int port, int buffer_size) :
    MulticastBase(group_ip, port),
    buffer_size_(buffer_size),
    buffer_(new char[buffer_size]) {
  }
  MulticastReceiver::~MulticastReceiver() {
    delete buffer_;
  }
  rxcpp::observable<std::string> MulticastReceiver::datagram() {
    return rxcpp::observable<>::create<std::string>(
      [this](rxcpp::subscriber<std::string> s){
        while (1) {
          size_t n = socket_.receive_from(
            boost::asio::buffer(buffer_, buffer_size_),
            endpoint_);
          s.on_next(std::move(std::string(buffer_, n)));
        }});
  }
}
}