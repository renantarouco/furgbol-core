cmake_minimum_required(VERSION 3.10)
project(ssl-refbox-proto)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(SSL_REFBOX_PROTO_CPP SSL_REFBOX_PROTO_H
  "game_event.proto"
  "rcon.proto"
  "referee.proto"
  "savestate.proto")

add_library(${PROJECT_NAME}
  ${SSL_REFBOX_PROTO_CPP})
target_link_libraries(${PROJECT_NAME}
  ${Protobuf_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
  DESTINATION "lib")
install(FILES ${SSL_REFBOX_PROTO_H}
  DESTINATION "include/ssl-refbox-proto")
