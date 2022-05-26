#include "gtest/gtest.h"
#include "../main.cpp"

TEST(Sort, merge) {
  int array[] = { 12,23,3,43,51,35,19,45 };
  int n = sizeof(array) / sizeof(array[0]);
  mergeSort(array, 0, n - 1);
  ASSERT_EQ(array[0], 3);
  ASSERT_EQ(array[1], 12);
  ASSERT_EQ(array[2], 19);
  ASSERT_EQ(array[3], 23);
  ASSERT_EQ(array[4], 35);
  ASSERT_EQ(array[5], 43);
  ASSERT_EQ(array[6], 45);
  ASSERT_EQ(array[7], 51);
}