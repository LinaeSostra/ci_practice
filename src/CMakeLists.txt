cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 11)
project(cpp-circle-ci LANGUAGES CXX)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable(testPoint test_point.cpp)