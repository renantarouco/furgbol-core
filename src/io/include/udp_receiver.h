#ifndef UDP_RECEIVER_H
#define UDP_RECEIVER_H

#include <array>
#include <string>

#include <boost/asio.hpp>

namespace furgbol {
namespace io {

class UDPReceiver
{
public:
  UDPReceiver(std::string, int);
  std::string receive();
private:
  boost::asio::io_context io_context_;
  boost::asio::ip::udp::socket socket_;
  boost::asio::ip::udp::endpoint sender_endpoint_;
  std::array<char, 4096> buffer_;
};

namespace errors {

class UDPReceiveError : public std::exception
{
  const char* what() const throw () { return "error receiving datagram"; }
};

} // namespace errors

} // namespace io
} // namespace furgbol

#endif