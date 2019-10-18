project(furgbol-core-io)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -pthread")

include_directories(
  "include")

set(IO_SRCS
  "src/serial_writer.cc")

set(IO_HDRS
  "include/serial_package.h"
  "include/serial_writer.h")

add_library(${PROJECT_NAME}
  ${IO_SRCS})
target_link_libraries(${PROJECT_NAME}
  serial pthread)

install(TARGETS ${PROJECT_NAME}
  DESTINATION "lib")
install(FILES ${IO_HDRS}
  DESTINATION "include/furgbol-core/io")
