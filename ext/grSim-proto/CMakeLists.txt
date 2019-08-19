cmake_minimum_required(VERSION 3.10)
project(grSim-proto)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(GRSIM_PROTO_CPP GRSIM_PROTO_H
  "grSim_Commands.proto"
  "grSim_Packet.proto"
  "grSim_Replacement.proto")

add_library(${PROJECT_NAME}
  ${GRSIM_PROTO_CPP})
target_link_libraries(${PROJECT_NAME}
  ${Protobuf_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
  DESTINATION "lib")
install(FILES ${GRSIM_PROTO_H}
  DESTINATION "include/grSim-proto")
