//
// Created by Anderson Porto on 10/7/22.
//

#ifndef EX00_INTEGERCASTING_HPP
#define EX00_INTEGERCASTING_HPP

#include "Casting.hpp"
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <cstdlib>

class IntegerCasting : public Casting {

 public:
  IntegerCasting(const std::string &str);

  ~IntegerCasting();

  IntegerCasting(IntegerCasting const &other);

  IntegerCasting &operator=(IntegerCasting const &other);

  void printCasting();

 private:
  IntegerCasting();

  virtual void castTo();

  virtual bool isValueValid();

  int integer;

  bool numberIsInteger();

};

#endif //EX00_INTEGERCASTING_HPP
