//
// Created by Anderson Porto on 10/6/22.
//

#include <cstdlib>
#include <limits>
#include <cmath>
#include "ConvertService.hpp"

ConvertService::ConvertService(std::string str) {
  this->string = str;
  this->integerCasting = new IntegerCasting(str);
}

ConvertService::~ConvertService() {
  delete this->integerCasting;

}

ConvertService::ConvertService(const ConvertService &other) {
  this->string = other.string;
  this->integerCasting = other.integerCasting;

}

ConvertService &ConvertService::operator=(const ConvertService &other) {
  if (this != &other) {
    this->string = other.string;
    this->integerCasting = other.integerCasting;
  }
  return *this;
}

void ConvertService::convert() {
  if (integerNumber()) {
    integerCasting->print();
    return;
  }
  std::cout << GREEN << "ELSE IF" << RESET << std::endl;
}

ConvertService::ConvertService() {

}

bool ConvertService::isChar() {
  return false;
}

bool ConvertService::integerNumber() {
  std::string input = this->string;

  for (unsigned long i = 0; i < input.length(); i++) {
    if ((input[0] == '-') || (input[0] == '+')) {
      continue;
    }
    if (std::isdigit(input[i]) == false) {
      return false;
    }
  }
  return true;
}

bool ConvertService::isFloat() {
  return false;
}

bool ConvertService::isDouble() {
  return false;
}
