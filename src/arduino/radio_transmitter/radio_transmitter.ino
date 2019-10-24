#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"

#define CE 7
#define CSN 8
#define ACK_MSG 255
#define PACKAGE_SIZE 9

RF24 radio(CE, CSN);
const uint64_t pipe[6] = {0xF1F1F1F1E1LL, 0xF0F0F0F0E2LL, 0xF0F0F0F0E3LL, 0xF0F0F0F0E4LL, 0xF0F0F0F0E5LL, 0xF0F0F0F0E6LL};  // Endereços do radio
byte serial_buffer[PACKAGE_SIZE];
uint8_t radio_buffer[PACKAGE_SIZE] = { 1, 100, 0, 0, 1, 1, 3, 0, 0 };

int serial_available;
byte dump;

void setup()
{
  radio.begin();
  radio.setChannel(100);
  radio.openWritingPipe(pipe[0]);
  Serial.begin(500000);
  Serial.write(ACK_MSG);
}

void loop() {
//  serial_available = Serial.available();
//  if (serial_available >= PACKAGE_SIZE) {
//    Serial.readBytes(serial_buffer, PACKAGE_SIZE);
//    for (int i = 0; i < serial_available - PACKAGE_SIZE; ++i) dump = Serial.read();
//    for (int i = 0; i < PACKAGE_SIZE; i++) radio_buffer[i] = serial_buffer[i];
//    radio.write(&radio_buffer, PACKAGE_SIZE);
//    Serial.write(ACK_MSG);
//  } else {
//    if (serial_available > 0) {
//      //Serial.readBytes(serial_buffer, serial_available);
//      for (int i = 0; i < serial_available; ++i) dump = Serial.read();
//    }
//    for (int i = 0; i < PACKAGE_SIZE; i++) radio_buffer[i] = 0;
//    radio.write(&radio_buffer, PACKAGE_SIZE);
//    Serial.write(ACK_MSG);
//  }
radio.write(&radio_buffer, PACKAGE_SIZE);
}
