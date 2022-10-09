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
  if (isChar()) {
    CharCasting charCasting(string);
    charCasting.print();
  } else if (isFloat()) {
    FloatCasting floatCasting(string);
    floatCasting.print();
  } else if (isDouble()) {
    DoubleCasting doubleCasting(string);
    doubleCasting.print();
  } else if (integerNumber()) {
    IntegerCasting integerCasting(string);
    integerCasting.print();
  } else {
    std::cout << RED << "\nImpossible to convert\n" << RESET << std::endl;
  }

}

ConvertService::ConvertService() {

}

bool ConvertService::isChar() {
  return string.length() == 1 && !isdigit(string[0]);
}

bool ConvertService::integerNumber() {
  std::string input = this->string;

  for (unsigned long i = 0; i < input.length(); i++) {
    if ((i == 0 && input[i] == '-') || (i == 0 && input[i] == '+')) {
      continue;
    }
    if (std::isdigit(input.c_str()[i]) == false) {
      return false;
    }
  }
  return true;
}

bool ConvertService::isFloat() {
  std::string input = this->string;

  if (input == "nanf" || input == "+inff" || input == "-inff") {
    return true;
  }
  for (unsigned long i = 0; i < input.length(); i++) {
    if ((i == 0 && input[i] == '-') || (i == 0 && input[i] == '+')) {
      continue;
    }
    if (std::isdigit(input[i]) == false && input[i] != '.' && input[i] != 'f') {
      return false;
    }
  }
  return (input[input.length() - 1] == 'f')
      && (input.find_first_not_of('.', 1) != input.find_last_of('.'));
}

bool ConvertService::isDouble() {
  std::string input = this->string;

  if (input == "nan" || input == "+inf" || input == "-inf") {
    return true;
  }
  for (unsigned long i = 0; i < input.length(); i++) {
    if ((i == 0 && input[i] == '-') || (i == 0 && input[i] == '+')) {
      continue;
    }
    if (std::isdigit(input[i]) == false && input[i] != '.' && input[i] != 'f') {
      return false;
    }
  }
  return (input.find_first_not_of('.', 1) != input.find_last_of('.'));
}
