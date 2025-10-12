#include "part_7_string.h"

#include <gtest/gtest.h>

TEST(CHAPTER5, PART7) {
  EXPECT_STREQ(
      "Your name is John and your favorite color is Blue and you entered 8 "
      "characters\n",
      learncpp::chapter_5::part_7::get_response("John", "Blue").c_str());
}