#include <part_12_conversion.h>

#include <gtest/gtest.h>

TEST(Chapter4, Part12) {
  ASSERT_EQ(learn_cpp::chapter_4::part_12::get_ascii_value('a'), 97);
}