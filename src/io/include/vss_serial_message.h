#ifndef VSS_SERIAL_MESSAGE_H
#define VSS_SERIAL_MESSAGE_H

#include "serial_message.h"

#include <iostream>
#include <stdint.h>
#include <vector>

namespace furgbol {
namespace io {

class VSSSerialMessage : SerialMessage {
    public:
        VSSSerialMessage();
        ~VSSSerialMessage();

        void serialize(std::vector<uint8_t> &buffer);

        friend std::ostream &operator <<(std::ostream &, VSSSerialMessage const &);
};

}  // namespace io
}  // namespace furgbol

#endif // VSS_SERIAL_MESSAGE_H