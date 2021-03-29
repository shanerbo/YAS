
add_executable(string_test String_Test/string_test.cpp)
target_link_libraries(string_test gtest gtest_main string -pthread)
add_test(NAME string_test COMMAND string_test)


add_executable(vector_test Vector_Test/vector_test.cpp)
target_link_libraries(vector_test gtest gtest_main vector -pthread)
add_test(NAME vector_test COMMAND vector_test)


