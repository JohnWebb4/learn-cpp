#include "summary.h"

#include <gtest/gtest.h>

TEST(Chapter5, Summary) {
  learncpp::chapter_5::summary::Person person1("John", 10); // NOLINT
  learncpp::chapter_5::summary::Person person2("Jack", 11); // NOLINT

  ASSERT_EQ(person2,
            learncpp::chapter_5::summary::get_older_person(person1, person2));
}