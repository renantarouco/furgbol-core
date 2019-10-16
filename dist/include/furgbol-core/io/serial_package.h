#ifndef SERIAL_PACKAGE_H
#define SERIAL_PACKAGE_H

#include <vector>

namespace furgbol {
namespace io {

class SerialPackage
{
public:
  virtual void serialize(std::vector<uint8_t>&) = 0;
};

} // namespace io
} // namespace furgbol

#endif