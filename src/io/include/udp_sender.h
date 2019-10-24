#ifndef MULTICAST_SENDER_H
#define MULTICAST_SENDER_H

#include <string>

#include <boost/asio.hpp>
namespace furgbol {
namespace io {

class UDPSender
{
public:
  UDPSender(std::string, unsigned short);
  size_t send(std::string);
private:
  boost::asio::io_context io_context_;
  boost::asio::ip::udp::socket socket_;
  boost::asio::ip::udp::endpoint endpoint_;
};

} // namespace io
} // namespace furgbol

#endif