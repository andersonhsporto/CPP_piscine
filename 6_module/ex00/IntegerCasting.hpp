//
// Created by Anderson Porto on 10/9/22.
//

#ifndef EX00_INTEGERCASTING_HPP
#define EX00_INTEGERCASTING_HPP

#include "Casting.hpp"

class IntegerCasting : public Casting {
 public:
  IntegerCasting(const std::string &str);

  virtual ~IntegerCasting();

  IntegerCasting(IntegerCasting const &other);

  IntegerCasting &operator=(IntegerCasting const &other);

  virtual void print();

 private:
  IntegerCasting();

  void parseChar();

  void parseInt();

  void parseFloat();

  void parseDouble();

  void printInt();

  void printChar();

  void printFloat();

  void printDouble();
};

#endif //EX00_INTEGERCASTING_HPP
