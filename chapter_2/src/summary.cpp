#include "summary.h"

#include <iostream>

namespace learncpp::chapter_2::summary {
auto read_number() -> int {
  int val;
  std::cin >> val;

  return val;
}

auto add_number(int num_1, int num_2) -> int { return num_1 + num_2; }
} // namespace learncpp::chapter_2::summary
