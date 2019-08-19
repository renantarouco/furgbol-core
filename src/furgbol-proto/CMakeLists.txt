cmake_minimum_required(VERSION 3.10)
project(furgbol-proto)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(FURGBOL_PROTO_CPP FURGBOL_PROTO_H
  "ai_variables.proto"
  "messages_ai_2Dsimulator.proto"
  "messages_ai_data_manager.proto"
  "messages_control.proto"
  "messages_data_manager.proto"
  "messages_vision_manager.proto"
  "game_event.proto"
  "referee.proto")

add_library(${PROJECT_NAME}
  ${FURGBOL_PROTO_CPP})
target_link_libraries(${PROJECT_NAME}
  ${Protobuf_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
  DESTINATION "lib")
install(FILES ${FURGBOL_PROTO_H}
  DESTINATION "include/furgbol-core/furgbol-proto")