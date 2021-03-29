//
// Created by shanerbo on 3/27/21.
//
#include "vector.hpp"
#include <gtest/gtest.h>
using namespace YAS;

GTEST_TEST(string_test, constructor_test) { vector<int> a; }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
