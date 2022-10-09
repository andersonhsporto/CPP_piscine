//
// Created by Anderson Porto on 10/9/22.
//

#ifndef EX00_INTEGERCASTING_HPP
#define EX00_INTEGERCASTING_HPP

#include "Casting.hpp"
#include <cstdlib>
#include <limits>
#include <iomanip>

class IntegerCasting : public Casting {
 public:
  IntegerCasting();

  IntegerCasting(const std::string &str);

  virtual ~IntegerCasting();

  IntegerCasting(IntegerCasting const &other);

  IntegerCasting &operator=(IntegerCasting const &other);

  virtual void print();

 private:
  void parseInt();

  void parseChar();

  void parseFloat();

  void parseDouble();

  void printInt();

  void printChar();

  void printFloat();

  void printDouble();

  int intValue;

  char charValue;

  float floatValue;

  double doubleValue;

};

#endif //EX00_INTEGERCASTING_HPP
