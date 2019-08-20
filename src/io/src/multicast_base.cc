#include "multicast_base.h"

namespace furgbol {
namespace io {
  MulticastBase::MulticastBase(std::string group_ip, int port) :
    io_(),
    socket_(io_),
    endpoint_(boost::asio::ip::address_v4::any(), port) {
    socket_.open(endpoint_.protocol());
    socket_.set_option(boost::asio::ip::multicast::enable_loopback(true));
    socket_.set_option(boost::asio::ip::udp::socket::reuse_address(true));
    socket_.bind(endpoint_);
    socket_.set_option(
      boost::asio::ip::multicast::join_group(
        boost::asio::ip::address::from_string(group_ip)));
  }
}
}