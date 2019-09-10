#ifndef SERIAL_MESSAGE_H
#define SERIAL_MESSAGE_H

#include <iostream>
#include <stdint.h>
#include <vector>

namespace furgbol {
namespace io {

enum F180SerialMessageHeaderFlags {
    ROBOT_ID = 0, VEL_X = 1, VEL_Y = 2, VEL_THETA = 3, DIR_X = 4, DIR_Y = 5, DIR_THETA = 6, 
    DRIBBLER = 7, KICK = 8
};

enum VSSSerialMessageHeaderFlags {
    ID_ROBOT = 0, X_VEL = 1, THETA_VEL = 2, X_DIR = 3, THETA_DIR = 4
};

enum MessageTypes {
    F180 = 0, VSS = 1
};

class SerialMessage {
    private:
        uint16_t pkg_id_;
        uint8_t msg_type_;
        uint8_t robot_id_;
        uint8_t velocity_x_;
        uint8_t velocity_theta_;
        uint8_t direction_x_;
        uint8_t direction_theta_;

    public:
        SerialMessage();
        ~SerialMessage();

        virtual void serialize(std::vector<uint8_t> &buffer) = 0;

        void clear();

        void setPkgId(uint16_t pkg_id);
        void setMsgType(uint8_t msg_type);
        void setRobotId(uint8_t robot_id);
        void setVelocityX(uint8_t velocity_x);
        void setVelocityTheta(uint8_t velocity_theta);
        void setDirectionX(uint8_t direction_x);
        void setDirectionTheta(uint8_t direction_theta);

        uint16_t getPkgId();
        uint8_t getMsgType();
        uint8_t getRobotId();
        uint8_t getVelocityX();
        uint8_t getVelocityTheta();
        uint8_t getDirectionX();
        uint8_t getDirectionTheta();
};

}  // namespace io
}  // namespace furgbol

#endif // SERIAL_MESSAGE_H