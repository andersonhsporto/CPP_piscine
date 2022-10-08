//
// Created by Anderson Porto on 10/8/22.
//

#ifndef EX00_CHARCASTING_HPP
#define EX00_CHARCASTING_HPP

#include "Casting.hpp"
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <cstdlib>

class CharCasting : public Casting {

 public:
  CharCasting(const std::string &str);

  ~CharCasting();

  CharCasting(CharCasting const &other);

  CharCasting &operator=(CharCasting const &other);

  void printCasting();

  class NonDisplayableException : public std::exception {
   public:
    const char *what() const throw() {
      return "Non displayable";
    }
  };

 private:
  CharCasting();

  virtual void castTo();

  virtual bool isValueValid();

  bool isValidChar(const char c);

  bool isNumber();

  char c;
};

#endif //EX00_CHARCASTING_HPP
