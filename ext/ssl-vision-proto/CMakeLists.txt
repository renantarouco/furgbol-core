cmake_minimum_required(VERSION 3.10)
project(ssl-vision-proto)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(SSL_VISION_PROTO_CPP SSL_VISION_PROTO_H
  "messages_robocup_ssl_detection.proto"
  "messages_robocup_ssl_geometry_legacy.proto"
  "messages_robocup_ssl_geometry.proto"
  "messages_robocup_ssl_refbox_log.proto"
  "messages_robocup_ssl_wrapper_legacy.proto"
  "messages_robocup_ssl_wrapper.proto")

add_library(${PROJECT_NAME}
  ${SSL_VISION_PROTO_CPP})
target_link_libraries(${PROJECT_NAME}
  ${Protobuf_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
  DESTINATION "lib")
install(FILES ${SSL_VISION_PROTO_H}
  DESTINATION "include/ssl-vision-proto")