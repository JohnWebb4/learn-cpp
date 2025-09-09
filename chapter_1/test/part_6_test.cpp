#include <gtest/gtest.h>
#include <iostream>
#include <string>

#include "part_6_initialization.h"

// Demonstrate some basic assertions.
TEST(Chapter1, Part6) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);

  EXPECT_EQ(learncpp::part_1_6::print_cpp_version("HI"), 0);
}
