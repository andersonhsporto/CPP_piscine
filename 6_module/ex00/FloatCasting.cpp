//
// Created by Anderson Porto on 10/9/22.
//

#include "FloatCasting.hpp"

FloatCasting::FloatCasting() {
}

FloatCasting::FloatCasting(const std::string &str) : Casting(str) {
}

FloatCasting::~FloatCasting() {
}

FloatCasting::FloatCasting(const FloatCasting &other) : Casting(other) {
  *this = other;
}

FloatCasting &FloatCasting::operator=(const FloatCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->intValue = other.intValue;
    this->charValue = other.charValue;
    this->floatValue = other.floatValue;
    this->doubleValue = other.doubleValue;
  }
  return *this;
}

void FloatCasting::print() {
  printChar();
  printInt();
  printFloat();
  printDouble();
}

void FloatCasting::parseChar() {
  Casting::parseChar();
}

void FloatCasting::parseInt() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (static_cast<long long>(number) > std::numeric_limits<int>::max() ||
      static_cast<long long>(number) < std::numeric_limits<int>::min()) {
    throw ImpossibleException();
  } else {
    this->intValue = static_cast<int>(number);
  }
}

void FloatCasting::parseFloat() {
  Casting::parseFloat();
}

void FloatCasting::parseDouble() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (number > +std::numeric_limits<double>::infinity() ||
      number < -std::numeric_limits<double>::infinity()) {
    throw ImpossibleException();
  } else {
    this->doubleValue = static_cast<double>(number);
  }
}

void FloatCasting::printInt() {
  try {
    parseInt();
    std::cout << "int: " << intValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "int: " << e.what() << RESET << std::endl;
  }
}

void FloatCasting::printChar() {
  try {
    parseChar();
    std::cout << "char: " << charValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "char: " << e.what() << RESET << std::endl;
  }
}

void FloatCasting::printFloat() {
  try {
    parseFloat();
    std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "float: " << e.what() << RESET << std::endl;
  }
}

void FloatCasting::printDouble() {
  try {
    parseDouble();
    std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "double: " << e.what() << RESET << std::endl;
  }
}
