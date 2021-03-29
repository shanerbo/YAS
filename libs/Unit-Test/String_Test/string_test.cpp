//
// Created by shanerbo on 3/27/21.
//
#include "string.hpp"
#include <gtest/gtest.h>
using namespace YAS;

GTEST_TEST(string_test, constructor_test) {
  string a;
  a = "Hello";
  ASSERT_TRUE(0 == strcmp("Hello", a.c_str()));
  a += " World";
  ASSERT_TRUE(0 == strcmp("Hello World", a.c_str()));
  string b("Erbo");
  string c = b + " Shan";
  ASSERT_TRUE(0 == strcmp("Erbo Shan", c.c_str()));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
