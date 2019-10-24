#include "udp_receiver.h"

namespace furgbol {
namespace io {

UDPReceiver::UDPReceiver(std::string listen_addr, int multicast_port) :
  io_context_(),
  socket_(io_context_)
{
  boost::asio::ip::udp::endpoint listen_endpoint(
    boost::asio::ip::make_address(listen_addr),
    multicast_port);
  socket_.open(listen_endpoint.protocol());
  socket_.set_option(boost::asio::ip::udp::socket::reuse_address(true));
  socket_.bind(listen_endpoint);
}

std::string UDPReceiver::receive() {
  size_t n = socket_.receive_from(
    boost::asio::buffer(buffer_),
    sender_endpoint_);
  if (n <= 0 ) {
    throw errors::UDPReceiveError();
  } else {
    return std::string(buffer_.data(), n);
  }
}

}
}