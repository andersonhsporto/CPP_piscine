//
// Created by Anderson Porto on 10/7/22.
//

#include "IntegerCasting.hpp"

IntegerCasting::IntegerCasting() {
  this->integer = 0;
}

IntegerCasting::IntegerCasting(const std::string &str) : Casting(str) {
  this->integer = 0;
}

IntegerCasting::~IntegerCasting() {

}

IntegerCasting::IntegerCasting(const IntegerCasting &other) : Casting(other) {
  *this = other;
}

IntegerCasting &IntegerCasting::operator=(const IntegerCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->integer = other.integer;
  }
  return *this;
}

void IntegerCasting::printCasting() {
  try {
    castTo();
    std::cout << "int: " << integer << std::endl;
  } catch (std::exception &e) {
    std::cout << "int: " << e.what() << std::endl;
    return;
  }
}

void IntegerCasting::castTo() {
  if (isValueValid() && numberIsInteger()) {
    Casting::isNotValid();
    long double value = std::strtod(this->getCastString().c_str(), NULL);
    this->integer = static_cast<int>(value);
  } else {
    throw ImpossibleException();
  }
}

bool IntegerCasting::isValueValid() {
  std::string input = this->getCastString();
  long double value = std::strtod(input.c_str(), NULL);

    if (static_cast<long long>(value) > std::numeric_limits<int>::max() ||
    static_cast<long long>(value) < std::numeric_limits<int>::min()) {
        return false;
    } else if (std::isinf(value) && std::isnan(value)) {
      return false;
    } else {
      return true;
    }
}

bool IntegerCasting::numberIsInteger() {
  long double number = std::strtod(getCastString().c_str(), NULL);

  if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min()) {
    return false;
  } else if (std::isinf(number) || std::isnan(number)) {
    return false;
  } else {
    return true;
  }
}
