cmake_minimum_required(VERSION 3.24)
project(vector)

set(CMAKE_CXX_STANDARD 17)

add_executable(vector main.cpp Functions.h Functions.cpp)

add_subdirectory(tests)
