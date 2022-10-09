//
// Created by Anderson Porto on 10/9/22.
//

#include "DoubleCasting.hpp"

DoubleCasting::DoubleCasting() : Casting() {
}

DoubleCasting::DoubleCasting(const std::string &str) : Casting(str) {
}

DoubleCasting::~DoubleCasting() {

}

DoubleCasting::DoubleCasting(const DoubleCasting &other) : Casting(other) {
  *this = other;
}

DoubleCasting &DoubleCasting::operator=(const DoubleCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->intValue = other.intValue;
    this->charValue = other.charValue;
    this->floatValue = other.floatValue;
    this->doubleValue = other.doubleValue;
  }
  return *this;
}

void DoubleCasting::print() {
  printChar();
  printInt();
  printFloat();
  printDouble();
}

void DoubleCasting::printChar() {
  try {
    parseChar();
    std::cout << "char: " << charValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "char: " << e.what() << RESET << std::endl;
  }
}

void DoubleCasting::printInt() {
  try {
    parseInt();
    std::cout << "int: " << intValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "int: " << e.what() << RESET << std::endl;
  }
}

void DoubleCasting::printFloat() {
  try {
    parseFloat();
    std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
  } catch (std::exception &e) {
    if (Casting::getCastString() == "nan") {
      std::cout << "float: " << "nanf" << std::endl;
    } else if (Casting::getCastString() == "+inf") {
      std::cout << "float: " << "+inff" << std::endl;
    } else if (Casting::getCastString() == "-inf") {
      std::cout << "float: " << "-inff" << std::endl;
    } else {
      std::cout << RED << "float: " << e.what() << RESET << std::endl;
    }
  }
}

void DoubleCasting::printDouble() {
  try {
    parseDouble();
    std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
  } catch (std::exception &e) {
    if (Casting::getCastString() == "nan") {
      std::cout << "double: " << "nan" << std::endl;
    } else if (Casting::getCastString() == "+inf") {
      std::cout << "double: " << "+inf" << std::endl;
    } else if (Casting::getCastString() == "-inf") {
      std::cout << "double: " << "-inf" << std::endl;
    } else {
      std::cout << RED << "double: " << e.what() << RESET << std::endl;
    }
  }
}

void DoubleCasting::parseChar() {
  Casting::parseChar();
}

void DoubleCasting::parseInt() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (static_cast<long long>(number) > std::numeric_limits<int>::max() ||
      static_cast<long long>(number) < std::numeric_limits<int>::min()) {
    throw ImpossibleException();
  } else {
    this->intValue = static_cast<int>(number);
  }
}

void DoubleCasting::parseFloat() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (number > +std::numeric_limits<float>::infinity() ||
      number < -std::numeric_limits<float>::infinity()) {
    throw ImpossibleException();
  } else {
    this->floatValue = static_cast<float>(number);
  }
}

void DoubleCasting::parseDouble() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (number > +std::numeric_limits<double>::infinity() ||
      number < -std::numeric_limits<double>::infinity()) {
    throw ImpossibleException();
  } else {
    this->doubleValue = static_cast<double>(number);
  }
}
