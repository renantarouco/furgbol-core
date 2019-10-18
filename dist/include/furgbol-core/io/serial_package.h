#ifndef SERIAL_PACKAGE_H
#define SERIAL_PACKAGE_H

#include <vector>
#include <exception>

namespace furgbol {
namespace io {

class SerialPackage
{
public:
  virtual void serialize(std::vector<uint8_t>&) = 0;
  virtual void serialize(std::vector<uint8_t>::iterator, std::vector<uint8_t>::iterator) = 0;
  bool is_sent() { return is_sent_; }
  void is_sent(bool is_sent) { is_sent_ = is_sent; }
protected:
  SerialPackage() : is_sent_(false) {}
  bool is_sent_;
};

namespace errors {

class SerializeSizeError : public std::exception
{
  const char* what() const throw () { return "serialization space smaller than expected"; }
};

} // namespace errors

} // namespace io
} // namespace furgbol

#endif