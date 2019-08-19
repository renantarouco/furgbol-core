#ifndef MULTICAST_BASE_H
#define MULTICAST_BASE_H

#include <string>

#include <boost/asio.hpp>

namespace furgbol {
namespace io {
  class MulticastBase {
  public:
    MulticastBase(std::string, int);
  protected:
    boost::asio::io_service io_;
    boost::asio::ip::udp::socket socket_;
    boost::asio::ip::udp::endpoint endpoint_;
  };
}
}

#endif