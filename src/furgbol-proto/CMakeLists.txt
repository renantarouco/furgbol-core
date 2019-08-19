cmake_minimum_required(VERSION 3.10)
project(furgbol-proto)

find_package(Protobuf REQUIRED)

include_directories("${CMAKE_SOURCE_DIR}/ext/ssl-proto")
protobuf_generate_cpp(FURGBOLPROTO_CPP FURGBOLPROTO_H
    "ai_variables.proto"
    "messages_ai_2Dsimulator.proto"
    "messages_ai_data_manager.proto"
    "messages_control.proto"
    "messages_data_manager.proto"
    "messages_vision_manager.proto")

add_library(${PROJECT_NAME}
    ${FURGBOLPROTO_CPP})
target_link_libraries(${PROJECT_NAME}
    ${Protobuf_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
    DESTINATION "lib")
install(FILES ${FURGBOLPROTO_H}
    DESTINATION "include/furgbol-proto")