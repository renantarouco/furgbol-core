project(furgbol-core-io)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -pthread")

find_package(Boost REQUIRED COMPONENTS system)

include_directories(
  "include"
  ${Boost_INCLUDE_DIRS})

set(IO_SRCS
  "src/multicast_receiver.cc"
  "src/udp_receiver.cc"
  "src/udp_sender.cc"
  "src/serial_writer.cc")

set(IO_HDRS
  "include/multicast_receiver.h"
  "include/udp_receiver.h"
  "include/udp_sender.h"
  "include/serial_package.h"
  "include/serial_writer.h")

add_library(${PROJECT_NAME}
  ${IO_SRCS})
target_link_libraries(${PROJECT_NAME}
  serial pthread ${Boost_SYSTEM_LIBRARY})

install(TARGETS ${PROJECT_NAME}
  DESTINATION "lib")
install(FILES ${IO_HDRS}
  DESTINATION "include/furgbol-core/io")
