#ifndef SERIAL_PACKAGE_H
#define SERIAL_PACKAGE_H

#include <vector>

namespace furgbol {
namespace io {

class SerialPackage
{
public:
  virtual void serialize(std::vector<uint8_t>&) = 0;
  bool is_sent() { return is_sent_; }
  void is_sent(bool is_sent) { is_sent_ = is_sent; }
protected:
  SerialPackage() : is_sent_(false) {}
  bool is_sent_;
};

} // namespace io
} // namespace furgbol

#endif