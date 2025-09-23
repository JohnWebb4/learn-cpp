#include "summary.h"

#include <gtest/gtest.h>
#include <iostream>

TEST(Chapter2, Summary) {
  ASSERT_EQ(learncpp::chapter_2::summary::add_number(1, 2), 3);
}
