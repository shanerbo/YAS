cmake_minimum_required(VERSION 3.17)
project(YET_ANOTHER_STL)
enable_testing()

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(libs/string)
add_subdirectory(libs/Exception)
add_subdirectory(libs/Unit-Test)

add_executable(YET_ANOTHER_STL main.cpp)

target_link_libraries(${PROJECT_NAME} String Exception)
