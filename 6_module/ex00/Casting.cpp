//
// Created by Anderson Porto on 10/7/22.
//

#include <cstdlib>
#include <limits>
#include "Casting.hpp"

Casting::Casting() {
  this->castString = "42";
}

Casting::Casting(const std::string &str) {
  this->castString = str;
}

Casting::~Casting() {

}

Casting::Casting(const Casting &other) {
  *this = other;
}

Casting &Casting::operator=(const Casting &other) {
  if (this != &other) {
    this->castString = other.castString;
  }
  return *this;
}

const std::string &Casting::getCastString() const {
  return castString;
}

void Casting::parseChar() {
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

void Casting::parseFloat() {
  long double number = std::strtod(this->getCastString().c_str(), NULL);

  if (number > +std::numeric_limits<float>::infinity() ||
      number < -std::numeric_limits<float>::infinity()) {
    throw ImpossibleException();
  } else {
    this->floatValue = static_cast<float>(number);
  }
}

void Casting::parseDouble() {

}

void Casting::printInt() {

}

void Casting::printChar() {

}

void Casting::printFloat() {

}

void Casting::printDouble() {

}
