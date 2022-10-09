//
// Created by Anderson Porto on 10/8/22.
//

#include "DoubleCasting.hpp"

DoubleCasting::DoubleCasting(const std::string &str) : Casting(str) {
  this->doublefloatingPoint = 0;
}

DoubleCasting::~DoubleCasting() {

}

DoubleCasting::DoubleCasting(const DoubleCasting &other) : Casting(other) {
  this->doublefloatingPoint = other.doublefloatingPoint;
}

DoubleCasting &DoubleCasting::operator=(const DoubleCasting &other) {
  if (this != &other) {
    Casting::operator=(other);
    this->doublefloatingPoint = other.doublefloatingPoint;
  }
    return *this;
}

void DoubleCasting::printCasting() {

}

DoubleCasting::DoubleCasting() : Casting() {
  this->doublefloatingPoint = 0;
}

void DoubleCasting::castTo() {
  Casting::castTo();
}

bool DoubleCasting::isValueValid() {
  return Casting::isValueValid();
}

bool DoubleCasting::numberIsDoublePoint() {
  return false;
}
