//
// Created by Anderson Porto on 10/8/22.
//

#ifndef EX00_FLOATCASTING_HPP
#define EX00_FLOATCASTING_HPP

#include "Casting.hpp"

class FloatCasting : public Casting {
 public:
  FloatCasting(const std::string &str);

  ~FloatCasting();

  FloatCasting(FloatCasting const &other);

  FloatCasting &operator=(FloatCasting const &other);

  void printCasting();

 private:
  FloatCasting();

  void castTo();

  bool isValueValid();

  float floatNumber;

};

#endif //EX00_FLOATCASTING_HPP
