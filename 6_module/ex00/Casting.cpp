//
// Created by Anderson Porto on 10/7/22.
//

#include "Casting.hpp"

Casting::Casting() {

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
  if (!isChar() && !isInt() && !isFloat() && !isDouble()) {
    throw ImpossibleException();
  }
}

bool Casting::isChar() {
  if (getCastString().length() == 1) {
    if (!std::isprint(getCastString()[0]) || std::isdigit(getCastString()[0])) {
      return false;
    } else {
      return true;
    }
  }
  return false;
}

bool Casting::isInt() {
  size_t i = 0;

  if (getCastString()[0] == '-' || getCastString()[0] == '+') {
    i++;
  }
  while (i < getCastString().length() && std::isdigit(getCastString()[i])) {
    i++;
  }
  if (i == getCastString().length()) {
    return true;
  }
  return false;

}

bool Casting::isFloat() {
  size_t i = 0;

  if (getCastString()[0] == '-' || getCastString()[0] == '+') {
    i++;
  }
  while (i < getCastString().length() && std::isdigit(getCastString()[i])) {
    i++;
  }
  if (i < getCastString().length() && getCastString()[i] == '.') {
    i++;
    while (i < getCastString().length() && std::isdigit(getCastString()[i])) {
      i++;
    }
  }
  if (i == getCastString().length() - 1 && getCastString()[i] == 'f') {
    return true;
  }
  return false;
}

bool Casting::isDouble() {
  size_t i = 0;

  if (getCastString()[0] == '-' || getCastString()[0] == '+') {
    i++;
  }
  while (i < getCastString().length() && std::isdigit(getCastString()[i])) {
    i++;
  }
  if (i < getCastString().length() && getCastString()[i] == '.') {
    i++;
    while (i < getCastString().length() && std::isdigit(getCastString()[i])) {
      i++;
    }
  }
  if (i == getCastString().length()) {
    return true;
  }
  return false;
}

bool Casting::IsPseudoLiteral() {
  if (this->getCastString() == "nan" || this->getCastString() == "+inf" ||
      this->getCastString() == "-inf") {
    return true;
  } else {
    return false;
  }
}
