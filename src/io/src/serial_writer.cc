#include "serial_writer.h"

namespace furgbol {
namespace io {

SerialWriter::SerialWriter(std::string device, size_t package_size) :
  serial_port_(device),
  serialization_buffer_(package_size),
  send_buffer_()
{
  send_buffer_.reserve(package_size);
}

void SerialWriter::init(
  BaudRate baud_rate,
  CharSize char_size,
  Parity parity,
  StopBits stop_bits,
  FlowControl flow_control)
{
  serial_port_.Open(
    baud_rate,
    char_size,
    parity,
    stop_bits,
    flow_control);
}

void SerialWriter::write(SerialPackage& package)
{
  ArduinoCommand command = static_cast<ArduinoCommand>(serial_port_.ReadByte(0));
  if (command == ACK) {
    package.serialize(serialization_buffer_);
    send_buffer_ = serialization_buffer_;
    serial_port_.Write(send_buffer_);
  }
}

void SerialWriter::write(std::vector<uint8_t>& package)
{
  ArduinoCommand command = static_cast<ArduinoCommand>(serial_port_.ReadByte(0));
  if (command == ACK) {
    send_buffer_ = package;
    serial_port_.Write(send_buffer_);
  }
}

}
}