#ifndef MULTICAST_RECEIVER_H
#define MULTICAST_RECEIVER_H

#include <array>

#include <rxcpp/rx.hpp>
#include <boost/asio.hpp>

namespace furgbol {
namespace io {
  class MulticastReceiver {
  public:
    MulticastReceiver(std::string, std::string, int);
    rxcpp::observable<std::string> datagram();
  private:
    boost::asio::io_context io_context_;
    boost::asio::ip::udp::socket socket_;
    boost::asio::ip::udp::endpoint sender_endpoint_;
    std::array<char, 4096> buffer_;
  };
}
}

#endif