//
// Created by shanerbo on 3/27/21.
//
#include "String.hpp"
#include <gtest/gtest.h>
using namespace YAS;

GTEST_TEST(string_test, constructor_test) {
  String s("cao ni ma");
  s.print();
  std::cout << s[9] << std::endl;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

