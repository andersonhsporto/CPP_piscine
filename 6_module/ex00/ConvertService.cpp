//
// Created by Anderson Porto on 10/6/22.
//

#include "ConvertService.hpp"

ConvertService::ConvertService(std::string str) {
  this->string = str;
  this->charCasting = new CharCasting(str);
  this->integerCasting = new IntegerCasting(str);
  this->floatCasting = new FloatCasting(str);
  this->doubleCasting = new DoubleCasting(str);
}

ConvertService::~ConvertService() {
  delete charCasting;
  delete integerCasting;
  delete floatCasting;
  delete doubleCasting;
}

ConvertService::ConvertService(const ConvertService &other) {
  *this = other;
}

ConvertService &ConvertService::operator=(const ConvertService &other) {
  if (this != &other) {
    this->string = other.string;
    this->charCasting = other.charCasting;
    this->integerCasting = other.integerCasting;
    this->floatCasting = other.floatCasting;
    this->doubleCasting = other.doubleCasting;
  }
  return *this;
}

void ConvertService::convert() {
  charCasting->printCasting();
  integerCasting->printCasting();
  floatCasting->printCasting();
  doubleCasting->printCasting();
}

ConvertService::ConvertService() {
  this->string = "42";
  this->charCasting = new CharCasting("42");
  this->integerCasting = new IntegerCasting("42");
  this->floatCasting = new FloatCasting("42.0f");
  this->doubleCasting = new DoubleCasting("42.0");
}

