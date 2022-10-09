//
// Created by Anderson Porto on 10/9/22.
//

#include "IntegerCasting.hpp"

IntegerCasting::IntegerCasting() : Casting() {

}

IntegerCasting::IntegerCasting(const std::string &str) : Casting(str) {
}

IntegerCasting::~IntegerCasting() {

}

IntegerCasting::IntegerCasting(const IntegerCasting &other) : Casting(other) {
  *this = other;
}

IntegerCasting &IntegerCasting::operator=(const IntegerCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->intValue = other.intValue;
    this->charValue = other.charValue;
    this->floatValue = other.floatValue;
    this->doubleValue = other.doubleValue;
  }
  return *this;
}

void IntegerCasting::print() {
  printChar();
  printInt();
  printFloat();
  printDouble();
}

void IntegerCasting::printInt() {
  try {
    parseInt();
    std::cout << "int: " << intValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "int: " << e.what() << RESET << std::endl;
  }
}

void IntegerCasting::printChar() {
  try {
    parseChar();
    std::cout << "char: " << charValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "char: " << e.what() << RESET << std::endl;
  }
}

void IntegerCasting::printFloat() {
  try {
    parseFloat();
    std::cout << "float: " << floatValue << std::fixed << std::setprecision(1) << "f" << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "float: " << e.what() << RESET << std::endl;
  }
}

void IntegerCasting::printDouble() {
  try {
    parseDouble();
    std::cout << "double: " << doubleValue << std::fixed << std::setprecision(1) << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "double: " << e.what() << RESET << std::endl;
  }
}

void IntegerCasting::parseInt() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (static_cast<long long>(number) > std::numeric_limits<int>::max() ||
      static_cast<long long>(number) < std::numeric_limits<int>::min()) {
    throw ImpossibleException();
  } else {
    this->intValue = static_cast<int>(number);
  }
}

void IntegerCasting::parseChar() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (static_cast<long long>(number) > std::numeric_limits<char>::max() ||
      static_cast<long long>(number) < std::numeric_limits<char>::min()) {
    throw ImpossibleException();
  } else if (!std::isprint(static_cast<char>(number))) {
    throw NonDisplayableException();
  } else {
    this->charValue = static_cast<char>(number);
  }
}

void IntegerCasting::parseFloat() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (number > +std::numeric_limits<float>::infinity() ||
      number < -std::numeric_limits<float>::infinity()) {
    throw ImpossibleException();
  } else {
    this->floatValue = static_cast<float>(number);
  }
}

void IntegerCasting::parseDouble() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (number > +std::numeric_limits<double>::infinity() ||
      number < -std::numeric_limits<double>::infinity()) {
    throw ImpossibleException();
  } else {
    this->doubleValue = static_cast<double>(number);
  }
}



