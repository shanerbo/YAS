cmake_minimum_required(VERSION 3.5)

project(string VERSION 0.0.0 DESCRIPTION "ERBO's STL")

set(SOURCES src/string.cpp)

add_library(${PROJECT_NAME} STATIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_link_libraries(${PROJECT_NAME} Exception)