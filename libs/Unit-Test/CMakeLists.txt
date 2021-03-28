
add_executable(string_test String_Test/string_test.cpp)
target_link_libraries(string_test gtest gtest_main String -pthread)
add_test(NAME string_test COMMAND string_test)