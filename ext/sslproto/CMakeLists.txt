cmake_minimum_required(VERSION 3.10)
project(sslproto)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(SSLPROTO_CPP SSLPROTO_H
    "messages_robocup_ssl_detection.proto"
    "messages_robocup_ssl_geometry.proto"
    "messages_robocup_ssl_wrapper.proto"
    "messages_robocup_ssl_refbox_log.proto"
    "game_event.proto"
    "rcon.proto"
    "referee.proto"
    "savestate.proto"
    "grSim_Commands.proto"
    "grSim_Packet.proto"
    "grSim_Replacement.proto")

add_library(${PROJECT_NAME}
    ${SSLPROTO_CPP})
target_link_libraries(${PROJECT_NAME}
    ${Protobuf_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
    DESTINATION "lib")
install(FILES ${SSLPROTO_H}
    DESTINATION "include/sslproto")