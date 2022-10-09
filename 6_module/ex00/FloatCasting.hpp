//
// Created by Anderson Porto on 10/9/22.
//

#ifndef EX00_FLOATCASTING_HPP
#define EX00_FLOATCASTING_HPP

#include "Casting.hpp"
#include <cstdlib>
#include <limits>
#include <iomanip>

class FloatCasting : public Casting {
 public:
  FloatCasting(const std::string &str);

  virtual ~FloatCasting();

  FloatCasting(FloatCasting const &other);

  FloatCasting &operator=(FloatCasting const &other);

  virtual void print();

 private:
  FloatCasting();

  void parseChar();

  void parseInt();

  void parseFloat();

  void parseDouble();

  void printInt();

  void printChar();

  void printFloat();

  void printDouble();

};

#endif //EX00_FLOATCASTING_HPP
