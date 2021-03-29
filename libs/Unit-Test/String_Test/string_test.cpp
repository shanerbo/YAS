//
// Created by shanerbo on 3/27/21.
//
#include "String.hpp"
#include <gtest/gtest.h>
using namespace YAS;

GTEST_TEST(string_test, constructor_test) {
  String a("cao ni ma");
  auto b = a;
  String c = a;
  String d = "lol";
  auto e = a + d + c + "gg";
  printf("%s", e.c_str());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
