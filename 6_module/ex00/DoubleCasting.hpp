//
// Created by Anderson Porto on 10/9/22.
//

#ifndef EX00_DOUBLECASTING_HPP
#define EX00_DOUBLECASTING_HPP

#include "Casting.hpp"
#include <cstdlib>
#include <limits>
#include <iomanip>

class DoubleCasting : public Casting {
 public:
  DoubleCasting(const std::string &str);

  virtual ~DoubleCasting();

  DoubleCasting(DoubleCasting const &other);

  DoubleCasting &operator=(DoubleCasting const &other);

  virtual void print();

 private:
  DoubleCasting();

  void parseChar();

  void parseInt();

  void parseFloat();

  void parseDouble();

  void printInt();

  void printChar();

  void printFloat();

  void printDouble();

};

#endif //EX00_DOUBLECASTING_HPP
