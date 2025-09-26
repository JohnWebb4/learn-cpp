#include "summary.h"

#include <gtest/gtest.h>

const float SOME_CONST_VALUE = 2.0F;

TEST(Chapter4, Summary) {
  float a_number{SOME_CONST_VALUE};

  using Operand = learn_cpp::chapter_4::summary::Operand;

  ASSERT_EQ(5.0F, learn_cpp::chapter_4::summary::evaluate_expression(
                      a_number, Operand('+'), 3.0F));
  ASSERT_EQ(-1.0F, learn_cpp::chapter_4::summary::evaluate_expression(
                       2.0F, Operand('-'), 3.0F));
  ASSERT_EQ(6.0F, learn_cpp::chapter_4::summary::evaluate_expression(
                      2.0F, Operand('*'), 3.0F));
  ASSERT_EQ(2.0F, learn_cpp::chapter_4::summary::evaluate_expression(
                      6.0F, Operand('/'), 3.0F));

  ASSERT_FLOAT_EQ(
      100.0F, learn_cpp::chapter_4::summary::get_height_at_time(100.0F, 0.0F));
  ASSERT_FLOAT_EQ(
      95.1F, learn_cpp::chapter_4::summary::get_height_at_time(100.0F, 1.0F));
  ASSERT_FLOAT_EQ(
      21.6F, learn_cpp::chapter_4::summary::get_height_at_time(100.0F, 4.0F));
} // namespace learn_cpp::chapter_4::summary