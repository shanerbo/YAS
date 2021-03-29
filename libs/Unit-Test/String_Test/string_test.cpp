//
// Created by shanerbo on 3/27/21.
//
#include "string.hpp"
#include <gtest/gtest.h>
using namespace YAS;

GTEST_TEST(string_test, constructor_test) {
  string a("cao ni ma");
  auto b = a;
  string c = a;
  string d = "lol";
  auto e = a + d + c + "gg";
  printf("%s", e.c_str());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
