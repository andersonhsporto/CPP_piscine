//
// Created by Anderson Porto on 10/6/22.
//

#include "ConvertService.hpp"
#include "IntegerCasting.hpp"

ConvertService::ConvertService(std::string str) {
  this->string = str;
  this->charCasting = new CharCasting(str);
  this->integerCasting = new IntegerCasting(str);
}

ConvertService::~ConvertService() {
  delete charCasting;
  delete integerCasting;
}

ConvertService::ConvertService(const ConvertService &other) {
  *this = other;
}

ConvertService &ConvertService::operator=(const ConvertService &other) {
  if (this != &other) {
    this->string = other.string;
    this->charCasting = other.charCasting;
    this->integerCasting = other.integerCasting;
  }
  return *this;
}

void ConvertService::convert() {
  charCasting->printCasting();
  integerCasting->printCasting();
}

ConvertService::ConvertService() {
  this->string = "42";
  this->charCasting = new CharCasting("42");
  this->integerCasting = new IntegerCasting("42");
}

