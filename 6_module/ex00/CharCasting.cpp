//
// Created by Anderson Porto on 10/9/22.
//

#include "CharCasting.hpp"

CharCasting::CharCasting() : Casting() {
}

CharCasting::CharCasting(const std::string &str) : Casting(str) {
}

CharCasting::~CharCasting() {

}

CharCasting::CharCasting(const CharCasting &other) : Casting(other) {
  *this = other;
}

CharCasting &CharCasting::operator=(const CharCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->intValue = other.intValue;
    this->charValue = other.charValue;
    this->floatValue = other.floatValue;
    this->doubleValue = other.doubleValue;
  }
  return *this;

}

void CharCasting::print() {
  printChar();
  printInt();
  printFloat();
  printDouble();
}

void CharCasting::parseChar() {
  if (std::isprint(Casting::getCastString()[0])) {
    charValue = Casting::getCastString()[0];
  } else {
    throw NonDisplayableException();
  }
}

void CharCasting::parseInt() {
  intValue = static_cast<int>(Casting::getCastString()[0]);
}

void CharCasting::parseFloat() {
  floatValue = static_cast<float>(Casting::getCastString()[0]);
}

void CharCasting::parseDouble() {
  doubleValue = static_cast<double>(Casting::getCastString()[0]);
}

void CharCasting::printChar() {
  try {
    parseChar();
    std::cout << "char: " << charValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "char: " << e.what() << RESET << std::endl;
  }
}

void CharCasting::printInt() {
  try {
    parseInt();
    std::cout << "int: " << intValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "int: " << e.what() << RESET << std::endl;
  }
}

void CharCasting::printFloat() {
  try {
    parseFloat();
    std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "float: " << e.what() << RESET << std::endl;
  }
}

void CharCasting::printDouble() {
  try {
    parseDouble();
    std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << "double: " << e.what() << RESET << std::endl;
  }
}
