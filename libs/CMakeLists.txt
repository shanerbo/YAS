cmake_minimum_required(VERSION 3.17)

project(libs VERSION 0.0.0 DESCRIPTION "ERBO's STL")

set(CMAKE_CXX_STANDARD 11)

add_library(libs src/String.cpp)

target_include_directories(libs include)
target_include_directories(libs src)