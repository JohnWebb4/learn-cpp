#include <iostream>

#include "learn_cpp_config.h"

namespace learncpp::part_1_6 {
auto cppStandard() -> long { return __cplusplus; }

auto print_cpp_version(const char *executable) -> int {
  int a_number{1};

  // report version
  std::cout << executable << " Version " << LearnCpp_VERSION_MAJOR << "."
            << LearnCpp_VERSION_MINOR << '\n';
  std::cout << "Usage: " << executable << " number" << '\n';
  std::cout << "C++ Version" << cppStandard() << '\n';
  std::cout << "A is " << a_number << '\n';

  return 0;
}
} // namespace learncpp::part_1_6
