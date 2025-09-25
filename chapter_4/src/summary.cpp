#include "summary.h"

namespace learn_cpp::chapter_4::summary {
Operand::Operand(char new_value) { this->value = new_value; }

auto Operand::operator==(const char a_char) const noexcept -> bool {
  return this->value == a_char;
}

auto evaluate_expression(const float number_1, const Operand operand,
                         const float number_2) -> float {
  if (operand == '+') {
    return number_1 + number_2;
  }

  if (operand == '-') {
    return number_1 - number_2;
  }

  if (operand == '*') {
    return number_1 * number_2;
  }

  if (operand == '/') {
    return number_1 / number_2;
  }

  return 0;
}
} // namespace learn_cpp::chapter_4::summary
