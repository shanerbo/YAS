//
// Created by shanerbo on 3/27/21.
//
#include "vector.hpp"
#include <gtest/gtest.h>
using namespace YAS;

GTEST_TEST(vector_test, constructor_test) {
  vector<int> a;
  a.push_back(12);
  a.push_back(13);
  a.push_back(14);
  a.push_back(15);
  ASSERT_TRUE(a.size() == 4);
  ASSERT_TRUE(a.capacity() == 4);
  a.push_back(16);
  ASSERT_TRUE(a.capacity() == 8);
  vector<int> b = a;
  ASSERT_TRUE(b.size() == 5);
  ASSERT_TRUE(b.capacity() == 8);
  vector<int> c(b);
  ASSERT_TRUE(c.size() == 5);
  ASSERT_TRUE(c.capacity() == 8);
  vector<int> d(5, 12);
  ASSERT_TRUE(d.size() == 5);
  ASSERT_TRUE(d.capacity() == 10);
  vector<int> e = d;
  vector<int> f = std::move(e);
  ASSERT_TRUE(e.capacity() == 2);
  ASSERT_TRUE(e.size() == 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
