#include "multicast_sender.h"

namespace furgbol {
namespace io {
  MulticastSender::MulticastSender(std::string group_ip, int port) :
    MulticastBase(group_ip, port) {
  }
  size_t MulticastSender::send(std::string message) {
    return socket_.send_to(boost::asio::buffer(message), endpoint_);
  }
}
}