//
// Created by Anderson Porto on 10/9/22.
//

#ifndef EX00_CHARCASTING_HPP
#define EX00_CHARCASTING_HPP

#include "Casting.hpp"

class CharCasting : public Casting {
 public:
  CharCasting(const std::string &str);

  virtual ~CharCasting();

  CharCasting(CharCasting const &other);

  CharCasting &operator=(CharCasting const &other);

  virtual void print();

 private:
  CharCasting();

  void parseChar();

  void parseInt();

  void parseFloat();

  void parseDouble();

  void printInt();

  void printChar();

  void printFloat();

  void printDouble();
};

#endif //EX00_CHARCASTING_HPP
