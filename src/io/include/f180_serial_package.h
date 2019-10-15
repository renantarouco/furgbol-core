#ifndef F180_SERIAL_PACKAGE_H
#define F180_SERIAL_PACKAGE_H

#include <vector>
#include <tuple>

#include "serial_package.h"

namespace furgbol {
namespace io {

class F180SerialPackage final : public SerialPackage
{
public:
  enum Direction { NEGATIVE = 1, POSITIVE = 3 };

  // Constructor
  F180SerialPackage() : SerialPackage() {}

  // Getters
  uint8_t robot_id() { return robot_id_; }
  uint8_t x_vel() { return std::get<0>(velocity_); }
  uint8_t y_vel() { return std::get<1>(velocity_); }
  uint8_t theta_vel() { return std::get<2>(velocity_); }
  Direction x_direction() { return std::get<0>(direction_); }
  Direction y_direction() { return std::get<1>(direction_); }
  Direction theta_direction() { return std::get<2>(direction_); }
  uint8_t dribbler() { return dribbler_; }
  uint8_t kick() {return kick_; }

  //Setters
  void robot_id(uint8_t robot_id) { robot_id_ = robot_id; }
  void x_vel(uint8_t x_vel) { std::get<0>(velocity_) = x_vel; }
  void y_vel(uint8_t y_vel) { std::get<1>(velocity_) = y_vel; }
  void theta_vel(uint8_t theta_vel) { std::get<2>(velocity_) = theta_vel; }
  void x_direction(Direction x_direction) { std::get<0>(direction_) = x_direction; }
  void y_direction(Direction y_direction) { std::get<1>(direction_) = y_direction; }
  void theta_direction(Direction theta_direction) { std::get<2>(direction_) = theta_direction; }
  void dribbler(uint8_t dribbler) { dribbler_ = dribbler; }
  void kick(uint8_t kick) { kick_ = kick; }

  void serialize(std::vector<uint8_t>&) override;
private:
  uint8_t robot_id_;
  std::tuple<uint8_t, uint8_t, uint8_t> velocity_;
  std::tuple<Direction, Direction, Direction> direction_;
  uint8_t dribbler_;
  uint8_t kick_;
};

} // namespace io
} // namespace furgbol

#endif