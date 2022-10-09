//
// Created by Anderson Porto on 10/8/22.
//

#include <cmath>
#include <iomanip>
#include "DoubleCasting.hpp"

DoubleCasting::DoubleCasting(const std::string &str) : Casting(str) {
  this->doublefloatingPoint = 0;
}

DoubleCasting::~DoubleCasting() {

}

DoubleCasting::DoubleCasting(const DoubleCasting &other) : Casting(other) {
  this->doublefloatingPoint = other.doublefloatingPoint;
}

DoubleCasting &DoubleCasting::operator=(const DoubleCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->doublefloatingPoint = other.doublefloatingPoint;
  }
  return *this;
}

void DoubleCasting::printCasting() {
  try {
    castTo();
    std::cout << "double: " << std::fixed << std::setprecision(1) << doublefloatingPoint
              << std::endl;
  } catch (std::exception &e) {
    if (Casting::IsPseudoLiteral()) {
      std::cout << "double: " << getCastString() << std::endl;
    } else {
      std::cout << "double: impossible" << std::endl;
    }
    return;
  }

}

DoubleCasting::DoubleCasting() : Casting() {
  this->doublefloatingPoint = 0;
}

void DoubleCasting::castTo() {
  if (isValueValid()) {
    Casting::isNotValid();
    long double value = std::strtod(this->getCastString().c_str(), NULL);
    this->doublefloatingPoint = static_cast<double>(value);
  } else {
    throw ImpossibleException();
  }
}

bool DoubleCasting::isValueValid() {
  std::string input = this->getCastString();
  long double value = std::strtod(input.c_str(), NULL);

  if (std::isinf(value) && std::isnan(value)) {
    return false;
  } else {
    return true;
  }
}
