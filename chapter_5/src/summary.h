#include <string>

namespace learncpp::chapter_5::summary {
class Person {
public:
  [[nodiscard]] auto get_name() const -> const std::string &;
  [[nodiscard]] auto get_age() const -> int;
  Person(std::string name, int age);

private:
  std::string name;
  int age;
};

auto operator==(const Person &person1, const Person &person2) -> bool;

auto get_older_person(const Person &person1, const Person &person2)
    -> const Person &&;

} // namespace learncpp::chapter_5::summary