//
// Created by Anderson Porto on 10/6/22.
//

#include "ValidationService.hpp"

ValidationService::ValidationService() {

}

ValidationService::~ValidationService() {

}

ValidationService::ValidationService(const ValidationService &other) {
  *this = other;
}

ValidationService &ValidationService::operator=(const ValidationService &other) {
  if (this != &other) {
  }
  return *this;
}

bool ValidationService::validateString(std::string str) {
  if (isValidChar(str)) {
    return true;
  }
  throw InvalidInputException();
}

bool ValidationService::isValidChar(std::string str) {
  if (str.length() == 1 && !isdigit(str[0]) && !std::isdigit(str.c_str()[0])) {
    return true;
  } else {
    return false;
  }
}

