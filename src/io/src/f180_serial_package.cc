#include <stdexcept>

#include "f180_serial_package.h"

namespace furgbol {
namespace io {

void F180SerialPackage::serialize(std::vector<uint8_t>& serialization_buffer)
{
  if (serialization_buffer.size() >= 9) {
    serialization_buffer[0] = robot_id_;
    serialization_buffer[1] = std::get<0>(velocity_);
    serialization_buffer[2] = std::get<1>(velocity_);
    serialization_buffer[3] = std::get<2>(velocity_);
    serialization_buffer[4] = static_cast<uint8_t>(std::get<0>(direction_));
    serialization_buffer[5] = static_cast<uint8_t>(std::get<1>(direction_));
    serialization_buffer[6] = static_cast<uint8_t>(std::get<2>(direction_));
    serialization_buffer[7] = dribbler_;
    serialization_buffer[8] = kick_;
  } else {
    throw std::range_error("serialization buffer size is smaller than expected");
  }
}

} // namespace io
} // namespace furgbol