//
// Created by Anderson Porto on 10/6/22.
//

#include "ConvertService.hpp"

ConvertService::ConvertService(std::string str) {
  this->string = str;
}

ConvertService::~ConvertService() {
}

ConvertService::ConvertService(const ConvertService &other) {
  this->string = other.string;

}

ConvertService &ConvertService::operator=(const ConvertService &other) {
  if (this != &other) {
    this->string = other.string;
  }
  return *this;
}

void ConvertService::convert() {
  std::cout << string << std::endl;
  if (integerNumber()) {
    IntegerCasting integerCasting(string);
    integerCasting.print();
    return;
  }
  std::cout << GREEN << "ELSE IF" << RESET << std::endl;
}

ConvertService::ConvertService() {

}

bool ConvertService::isChar() {
  return string.length() == 1 && !isdigit(string[0]);
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
