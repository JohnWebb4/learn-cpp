#include <iostream>

namespace learncpp::part_1_11 {
auto double_that_number(int number) -> int { return 2 * number; }

auto double_console_input() -> int {
  std::cout << "Enter an integer: ";
  int num{};
  std::cin >> num;

  return double_that_number(num);
}
} // namespace learncpp::part_1_11