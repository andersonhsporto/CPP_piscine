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
