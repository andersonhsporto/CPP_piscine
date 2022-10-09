//
// Created by Anderson Porto on 10/8/22.
//

#include <cmath>
#include <iomanip>
#include "FloatCasting.hpp"
#include <cstdlib>
#include <limits>

FloatCasting::FloatCasting(const std::string &str) : Casting(str) {
  this->floatNumber = 0;
}

FloatCasting::~FloatCasting() {

}

FloatCasting::FloatCasting(const FloatCasting &other) : Casting(other) {
  *this = other;
}

FloatCasting &FloatCasting::operator=(const FloatCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->floatNumber = other.floatNumber;
  }
  return *this;
}

FloatCasting::FloatCasting() : Casting() {
  this->floatNumber = 0;
}

void FloatCasting::printCasting() {
  try {
    castTo();
    std::cout << "float: " << std::fixed << std::setprecision(1) << floatNumber << "f" << std::endl;
  } catch (std::exception &e) {
    std::cout << "float: " << e.what() << std::endl;
    return;
  }
}

void FloatCasting::castTo() {
  if (isValueValid()) {
    Casting::isNotValid();
    long double value = std::strtod(this->getCastString().c_str(), NULL);
    this->floatNumber = static_cast<float>(value);
  } else {
    throw ImpossibleException();
  }
}

bool FloatCasting::isValueValid() {
  std::string input = this->getCastString();
  long double value = std::strtod(input.c_str(), NULL);

  if (std::isinf(value) && std::isnan(value)) {
    return false;
  } else {
    return true;
  }
}

