#include "summary.h"

#include <string>
#include <utility>

namespace learncpp::chapter_5::summary {
auto Person::get_name() const -> const std::string & { return this->name; }

auto Person::get_age() const -> int { return this->age; }

Person::Person(std::string name, int age) : name(std::move(name)), age(age) {}

auto operator==(const Person &person1, const Person &person2) -> bool {
  return person1.get_age() == person2.get_age() &&
         person1.get_name() == person2.get_name();
}

auto get_older_person(const Person &person1, const Person &person2)
    -> const Person && {
  if (person1.get_age() > person2.get_age()) {
    return std::move(person1);
  }

  return std::move(person2);
}
} // namespace learncpp::chapter_5::summary