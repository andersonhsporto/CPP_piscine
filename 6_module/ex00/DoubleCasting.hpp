//
// Created by Anderson Porto on 10/8/22.
//

#ifndef EX00_DOUBLECASTING_HPP
#define EX00_DOUBLECASTING_HPP

#include "Casting.hpp"

class DoubleCasting : public Casting {
 public:
  DoubleCasting(const std::string &str);

  ~DoubleCasting();

  DoubleCasting(DoubleCasting const &other);

  DoubleCasting &operator=(DoubleCasting const &other);

  void printCasting();

 private:
  DoubleCasting();

  virtual void castTo();

  virtual bool isValueValid();

  double doublefloatingPoint;

};

#endif //EX00_DOUBLECASTING_HPP
