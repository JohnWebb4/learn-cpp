#include "part_7_string.h"

#include <iostream>
#include <sstream>
#include <string_view>

namespace learncpp::chapter_5::part_7 {
void read_input() {
  std::cout << "Enter your full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  std::cout << "Enter your favorite color: ";
  std::string color{};
  std::getline(std::cin >> std::ws, color);

  std::cout << get_response(name, color);
}

auto get_response(std::string_view name, std::string_view color)
    -> std::string {
  int length{static_cast<int>(name.length()) +
             static_cast<int>(color.length())};

  std::stringstream response_stream{};

  response_stream << "Your name is " << name << " and your favorite color is "
                  << color << " and you entered " << length << " characters\n";

  return response_stream.str();
}
} // namespace learncpp::chapter_5::part_7