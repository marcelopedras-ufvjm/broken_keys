cmake_minimum_required(VERSION 3.1)
project(broken_keys)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(broken_keys ${SOURCE_FILES} AcMath.cpp AcMath.h)