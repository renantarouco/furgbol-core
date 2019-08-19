#ifndef MULTICAST_SENDER_H
#define MULTICAST_SENDER_H

#include <string>

#include "multicast_base.h"

namespace furgbol {
namespace io {
  class MulticastSender final : protected MulticastBase {
  public:
    MulticastSender(std::string, int);
    size_t send(std::string);
  };
}
}

#endif