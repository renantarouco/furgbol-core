#ifndef MULTICAST_RECEIVER_H
#define MULTICAST_RECEIVER_H

#include <rxcpp/rx.hpp>

#include "multicast_base.h"

namespace furgbol {
namespace io {
  class MulticastReceiver final: protected MulticastBase {
  public:
    MulticastReceiver(std::string, int, int);
    ~MulticastReceiver();
    rxcpp::observable<std::string> datagram();
  private:
    int buffer_size_;
    char* buffer_;
  };
}
}

#endif