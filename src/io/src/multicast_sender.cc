#include "multicast_sender.h"

namespace furgbol {
namespace io {
  MulticastSender::MulticastSender(std::string addr, int port) :
    io_context_(),
    socket_(io_context_),
    endpoint_(boost::asio::ip::make_address(addr), port) {
    socket_.open(endpoint_.protocol());
  }
  size_t MulticastSender::send(const std::string& message) {
    return socket_.send_to(boost::asio::buffer(message), endpoint_);
  }
}
}