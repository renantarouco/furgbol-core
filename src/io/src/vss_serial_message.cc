#include "vss_serial_message.h"

namespace furgbol {
namespace io {

VSSSerialMessage::VSSSerialMessage() { SerialMessage::clear(); }

VSSSerialMessage::~VSSSerialMessage() {}

void VSSSerialMessage::serialize(std::vector<unsigned char> &buffer) {
    buffer[ROBOT_ID] = robot_id_ + 128;
    buffer[VEL_X] = velocity_x_;
    buffer[VEL_THETA] = velocity_theta_;
    buffer[DIR_X] = direction_x_;
    buffer[DIR_THETA] = direction_theta_;
}

std::ostream &operator <<(std::ostream &stream, VSSSerialMessage const &message) {
    stream << "--->TeamProcolMessage{ " << std::endl;
    stream << "\tRobot ID: " << static_cast<int>(message.robot_id_) << std::endl;
    stream << "\tLinear Velocity: " << static_cast<int>(message.velocity_x_) << std::endl;
    stream << "\tAngular Velocity: " << static_cast<int>(message.velocity_theta_) << std::endl;
    stream << "\tLinear Direction: " << static_cast<int>(message.direction_x_) << std::endl;
    stream << "\tAngular Direction: " << static_cast<int>(message.direction_theta_) << std::endl;
    stream << "};";
    return stream;
}

} // namespace io
} // namespace furgbol