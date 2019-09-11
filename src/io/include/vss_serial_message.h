#ifndef VSS_SERIAL_MESSAGE_H
#define VSS_SERIAL_MESSAGE_H

#include "serial_message.h"

#include <iostream>
#include <stdint.h>
#include <vector>

namespace furgbol {
namespace io {

enum VSSSerialMessageHeaderFlags {
    ROBOT_ID = 0, VEL_X = 1, VEL_THETA = 2, DIR_X = 3, DIR_THETA = 4
};

class VSSSerialMessage : public SerialMessage {
    public:
        VSSSerialMessage();
        ~VSSSerialMessage();

        void serialize(std::vector<unsigned char> &buffer);

        friend std::ostream &operator <<(std::ostream &, VSSSerialMessage const &);
};

}  // namespace io
}  // namespace furgbol

#endif // VSS_SERIAL_MESSAGE_H