//
// Created by Anderson Porto on 10/7/22.
//

#include "Casting.hpp"

Casting::Casting() {
  std::cout << "Casting default constructor called" << std::endl;

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

void Casting::castTo() {

}

bool Casting::isValueValid() {
  return true;
}

void Casting::isNotValid() {
  size_t numberOfChars = 0;
  std::string validChars = "0123456789+-.f";

  for(long unsigned int i = 0; i < this->getCastString().length(); i++) {
    for(long unsigned int j = 0; j < validChars.length(); j++) {
        if (this->getCastString().c_str()[i] != validChars.c_str()[j]) {
          numberOfChars++;
          continue;
        }
      }
    }
  if (numberOfChars > (validChars.length() + 1)){
    throw ImpossibleException();
  }
  }
