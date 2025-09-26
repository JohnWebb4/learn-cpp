#pragma once

namespace learn_cpp::chapter_4::summary {
class Operand {
public:
  explicit Operand(char new_value);
  auto operator==(char a_char) const noexcept -> bool;

private:
  char value;
};

auto evaluate_expression(float number_1, Operand operand, float number_2)
    -> float;

auto get_height_at_time(float height, float time) -> float;
} // namespace learn_cpp::chapter_4::summary