#ifndef SERIAL_WRITER_H
#define SERIAL_WRITER_H

#include <string>
#include <vector>

#include <SerialPort.h>

#include "serial_package.h"

namespace furgbol {
namespace io {

using BaudRate = SerialPort::BaudRate;
using CharSize = SerialPort::CharacterSize;
using Parity = SerialPort::Parity;
using StopBits = SerialPort::StopBits;
using FlowControl = SerialPort::FlowControl;

enum ArduinoCommand
{
  HIPC = 'a', ACK = 255
};
typedef enum ArduinoCommand ArduinoCommand;

enum PCCommand
{
  HIARDUINO = 'A'
};
typedef enum PCCommand PCCommand;

class SerialWriter
{
public:
  SerialWriter(std::string, size_t);
  void init(
    BaudRate,
    CharSize,
    Parity,
    StopBits,
    FlowControl);
  void write(SerialPackage&);
  void write(const SerialPackage&);
  void write(std::vector<uint8_t>&);
private:
  SerialPort serial_port_;
  std::vector<uint8_t> serialization_buffer_;
  SerialPort::DataBuffer send_buffer_;
};

} // namespace io
} // namespace furgbol

#endif