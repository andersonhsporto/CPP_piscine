//
// Created by Anderson Porto on 10/8/22.
//
#include "CharCasting.hpp"

CharCasting::CharCasting(const std::string &str) : Casting(str) {
}

CharCasting::~CharCasting() {

}

CharCasting::CharCasting(const CharCasting &other) : Casting(other) {
  this->c = other.c;
}

CharCasting &CharCasting::operator=(const CharCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->c = other.c;
  }
  return *this;
}

CharCasting::CharCasting() : Casting("42") {
  this->c = '4';
}

void CharCasting::printCasting() {
  try {
    castTo();
    std::cout << "char: " << this->c << std::endl;
  } catch (std::exception &e) {
    std::cout << "char: " << e.what() << std::endl;
  }
}

void CharCasting::castTo() {
  Casting::isNotValid();
  if (isValueValid()) {
    this->c = static_cast<char>(this->getCastString().c_str()[0]);
  } else {
    parseToChar();
  }
}

void CharCasting::parseToChar() {
  long double value = std::strtod(this->getCastString().c_str(), NULL);

  if (value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min()) {
    throw ImpossibleException();
  } else if (!std::isprint(static_cast<char>(value))) {
    throw NonDisplayableException();
  } else if (std::isdigit(this->getCastString().length() == 1 && static_cast<char>(value))) {
    throw NonDisplayableException();
  } else {
    this->c = static_cast<char>(value);
  }
}

bool CharCasting::isValueValid() {
  std::string input = this->getCastString();

  if (input.length() == 1) {
    if (!std::isprint(input.c_str()[0])) {
      return false;
    } else if (std::isdigit(input.c_str()[0])) {
      return false;
    } else {
      return true;
    }
  } else {
    return false;
  }
}

