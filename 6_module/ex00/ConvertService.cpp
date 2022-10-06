//
// Created by Anderson Porto on 10/6/22.
//

#include "ConvertService.hpp"
#include "ValidationService.hpp"

ConvertService::ConvertService(std::string str) {

}

ConvertService::~ConvertService() {}

ConvertService::ConvertService(const ConvertService &other) {
  *this = other;
}

ConvertService &ConvertService::operator=(const ConvertService &other) {
  if (this != &other) {
    this->character = other.character;
    this->integer = other.integer;
    this->floating = other.floating;
    this->doublePrecision = other.doublePrecision;
  }
}

void ConvertService::convert(char *str) {
  ValidationService validationService;

  validationService.validateString(str);
}

ConvertService::ConvertService() {}

