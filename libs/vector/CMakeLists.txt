cmake_minimum_required(VERSION 3.5)

project(vector VERSION 0.0.0 DESCRIPTION "ERBO's STL")

add_library(${PROJECT_NAME} INTERFACE)

target_link_libraries(${PROJECT_NAME} INTERFACE Exception)

target_include_directories(${PROJECT_NAME} INTERFACE include)