#ifndef SERIAL_REPOSITORY_H
#define SERIAL_REPOSITORY_H

#include <vector>
#include <stdexcept>

#include "serial_package.h"

namespace furgbol {
namespace io {

class SerialRepository
{
public:
  SerialRepository(size_t, size_t);
  template<typename T> void package(size_t, const T&);
  std::vector<uint8_t>& payload();
private:
  std::vector<SerialPackage*> repository_;
  size_t package_size_;
  std::vector<uint8_t> payload_buffer_;
};

} // namespace io
} // namespace furgbol

#endif