#include "serial_message.h"

#include <string>

namespace furgbol {
namespace io {

SerialMessage::SerialMessage() { clear(); }

SerialMessage::~SerialMessage() {}

void SerialMessage::clear() {
    pkg_id_ = 0;
    msg_type_ = 0;
    robot_id_ = 0;
    velocity_x_ = 0;
    velocity_theta_ = 0;
    direction_x_ = 0;
    direction_theta_ = 0;
}

void SerialMessage::setPkgId(uint16_t pkg_id) { pkg_id_ = pkg_id; }

void SerialMessage::setMsgType(uint8_t msg_type) { msg_type_ = msg_type; }

void SerialMessage::setRobotId(uint8_t robot_id) { robot_id_ = robot_id; }

void SerialMessage::setVelocityX(uint8_t velocity_x) { velocity_x_ = velocity_x; }

void SerialMessage::setVelocityTheta(uint8_t velocity_theta) { velocity_theta_ = velocity_theta; }

void SerialMessage::setDirectionX(uint8_t direction_x) { direction_x_ = direction_x; }

void SerialMessage::setDirectionTheta(uint8_t direction_theta) { direction_theta_ = direction_theta; }

uint16_t SerialMessage::getPkgId() { return pkg_id_; }

uint8_t SerialMessage::getMsgType() { return msg_type_; }

uint8_t SerialMessage::getRobotId() { return robot_id_; }

uint8_t SerialMessage::getVelocityX() { return velocity_x_; }

uint8_t SerialMessage::getVelocityTheta() { return velocity_theta_; }

uint8_t SerialMessage::getDirectionX() { return direction_x_; }

uint8_t SerialMessage::getDirectionTheta() { return direction_theta_; }

} // namespace io
} // namespace furgbol