cmake_minimum_required(VERSION 3.17)
project(YET_ANOTHER_STL)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(libs)

add_executable(YET_ANOTHER_STL main.cpp)