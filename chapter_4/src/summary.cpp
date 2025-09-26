#include "summary.h"

#include <cmath>

namespace learn_cpp::chapter_4::summary {
Operand::Operand(char new_value) { this->value = new_value; }

const float GRAVITY_ACCELERATION_MS2 = 9.8F;

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

auto get_distance_traveled(float acceleration, float velocity, float time)
    -> float {
  return ((acceleration * time * time) / 2) + (velocity * time);
}

auto get_height_at_time(float height, float time) -> float {
  return std::fmax(
      height - get_distance_traveled(GRAVITY_ACCELERATION_MS2, 0.0F, time),
      0.0F);
}
} // namespace learn_cpp::chapter_4::summary
