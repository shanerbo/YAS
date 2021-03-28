//
// Created by shanerbo on 3/27/21.
//
#include "String.hpp"
#include <gtest/gtest.h>

GTEST_TEST(string_test, constructor_test) { std::cout << "lol" << std::endl; }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
