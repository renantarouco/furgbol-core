project(furgbol-core-io)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread") 

find_package(Boost 1.70 COMPONENTS system REQUIRED)

include_directories(
  "include"
  ${Boost_INCLUDE_DIRS}
  "${CMAKE_SOURCE_DIR}/ext/RxCpp/Rx/v2/src")

set(IO_SRCS
  "src/multicast_base.cc"
  "src/multicast_receiver.cc"
  "src/multicast_sender.cc")

set(IO_HDRS
  "include/multicast_base.h"
  "include/multicast_receiver.h"
  "include/multicast_sender.h")

add_library(${PROJECT_NAME}
  ${IO_SRCS})
target_link_libraries(${PROJECT_NAME}
  ${Boost_SYSTEM_LIBRARY})

install(TARGETS ${PROJECT_NAME}
  DESTINATION "lib")
install(FILES ${IO_HDRS}
  DESTINATION "include/furgbol-core/io")
