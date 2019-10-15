cmake_minimum_required(VERSION 3.10)
project(furgbol-proto)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(SSL_VISION_PROTO_CPP SSL_VISION_PROTO_H
  "messages_robocup_ssl_detection.proto"
  "messages_robocup_ssl_geometry_legacy.proto"
  "messages_robocup_ssl_geometry.proto"
  "messages_robocup_ssl_refbox_log.proto"
  "messages_robocup_ssl_wrapper_legacy.proto"
  "messages_robocup_ssl_wrapper.proto")

add_library(ssl-vision-proto
  ${SSL_VISION_PROTO_CPP})
target_link_libraries(ssl-vision-proto
  ${Protobuf_LIBRARIES})

install(TARGETS ssl-vision-proto
  DESTINATION "lib")
install(FILES ${SSL_VISION_PROTO_H}
  DESTINATION "include/ssl-vision-proto")

protobuf_generate_cpp(SSL_REFBOX_PROTO_CPP SSL_REFBOX_PROTO_H
  "game_event.proto"
  "rcon.proto"
  "referee.proto"
  "savestate.proto")

add_library(ssl-refbox-proto
  ${SSL_REFBOX_PROTO_CPP})
target_link_libraries(ssl-refbox-proto
  ${Protobuf_LIBRARIES})

install(TARGETS ssl-refbox-proto
  DESTINATION "lib")
install(FILES ${SSL_REFBOX_PROTO_H}
  DESTINATION "include/ssl-refbox-proto")

protobuf_generate_cpp(GRSIM_PROTO_CPP GRSIM_PROTO_H
  "grSim_Commands.proto"
  "grSim_Packet.proto"
  "grSim_Replacement.proto")

add_library(grSim-proto
  ${GRSIM_PROTO_CPP})
target_link_libraries(grSim-proto
  ${Protobuf_LIBRARIES})

install(TARGETS grSim-proto
  DESTINATION "lib")
install(FILES ${GRSIM_PROTO_H}
  DESTINATION "include/grSim-proto")

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
  DESTINATION "include/furgbol-core/proto")