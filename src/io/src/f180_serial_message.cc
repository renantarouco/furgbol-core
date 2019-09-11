#include "f180_serial_message.h"

namespace furgbol {
namespace io {

F180SerialMessage::F180SerialMessage() {
    SerialMessage::clear();
    clear();
}

F180SerialMessage::~F180SerialMessage() {}

void F180SerialMessage::serialize(std::vector<unsigned char> &buffer) {
    buffer[ROBOT_ID] = robot_id_;
    buffer[VEL_X] = velocity_x_;
    buffer[VEL_Y] = velocity_y_;
    buffer[VEL_THETA] = velocity_theta_;
    buffer[DIR_X] = direction_x_;
    buffer[DIR_Y] = direction_y_;
    buffer[DIR_THETA] = direction_theta_;
    buffer[DRIBBLER] = dribbler_;
    buffer[KICK] = kick_;
}

std::ostream &operator <<(std::ostream &stream, F180SerialMessage const &message) {
    stream << "--->TeamProcolMessage{ " << std::endl;
    stream << "\tRobot ID: " << static_cast<int>(message.robot_id_) << std::endl;
    stream << "\tX Velocity: " << static_cast<int>(message.velocity_x_) << std::endl;
    stream << "\tY Velocity: " << static_cast<int>(message.velocity_y_) << std::endl;
    stream << "\tAngular Velocity: " << static_cast<int>(message.velocity_theta_) << std::endl;
    stream << "\tX Direction: " << static_cast<int>(message.direction_x_) << std::endl;
    stream << "\tY Direction: " << static_cast<int>(message.direction_y_) << std::endl;
    stream << "\tAngular Direction: " << static_cast<int>(message.direction_theta_) << std::endl;
    stream << "\tDribbler: " << static_cast<int>(message.dribbler_) << std:: endl;
    stream << "\tKick: " << static_cast<int>(message.kick_) << std:: endl;
    stream << "};";
    return stream;
}

void F180SerialMessage::clear() {
    velocity_y_ = 0;
    direction_y_ = 0;
    dribbler_ = 0;
    kick_ = 0;
}

void F180SerialMessage::setVelocityY(uint8_t velocity_y) { velocity_y_ = velocity_y; }

void F180SerialMessage::setDirectionY(uint8_t direction_y) { direction_y_ = direction_y; }

void F180SerialMessage::setDribbler(uint8_t dribbler) { dribbler_ = dribbler; }

void F180SerialMessage::setKick(uint8_t kick) { kick_ = kick; }

uint8_t F180SerialMessage::getDirectionY() { return direction_y_; }

uint8_t F180SerialMessage::getVelocityY() { return velocity_y_; }

uint8_t F180SerialMessage::getDribbler() { return dribbler_; }

uint8_t F180SerialMessage::getKick() { return kick_; }

} // namespace io
} // namespace furgbol