#ifndef F180_SERIAL_MESSAGE_H
#define F180_SERIAL_MESSAGE_H

#include "serial_message.h"

#include <iostream>
#include <stdint.h>
#include <vector>

namespace furgbol {
namespace io {

enum F180SerialMessageHeaderFlags {
    ROBOT_ID = 0, VEL_X = 1, VEL_Y = 2, VEL_THETA = 3, DIR_X = 4, DIR_Y = 5, DIR_THETA = 6, 
    DRIBBLER = 7, KICK = 8
};

class F180SerialMessage : public SerialMessage {
    private:
        uint8_t velocity_y_;
        uint8_t direction_y_;
        uint8_t dribbler_;
        uint8_t kick_;

    public:
        F180SerialMessage();
        ~F180SerialMessage();

        void serialize(std::vector<unsigned char> &buffer);

        void clear();

        friend std::ostream &operator <<(std::ostream &, F180SerialMessage const &);

        void setVelocityY(uint8_t velocity_y);
        void setDirectionY(uint8_t direction_y);
        void setDribbler(uint8_t dribbler);
        void setKick(uint8_t kick);

        uint8_t getVelocityY();
        uint8_t getDirectionY();
        uint8_t getDribbler();
        uint8_t getKick();
};

}  // namespace io
}  // namespace furgbol

#endif // F180_SERIAL_MESSAGE_H