#include "summary.h"

#include <iostream>
#include <gtest/gtest.h>

TEST(Chapter2, Summary) {
  ASSERT_EQ(learncpp::chapter_2::summary::add_number(1, 2), 3);
}
