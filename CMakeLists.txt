cmake_minimum_required(VERSION 3.20)

project(tests-pb VERSION 0.0.1)

find_package(protobuf CONFIG REQUIRED)

add_executable(main src/main.cc gen/test.pb.cc gen/test.pb.h)

target_link_libraries(main PRIVATE protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)