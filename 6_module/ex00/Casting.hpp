//
// Created by Anderson Porto on 10/7/22.
//

#ifndef EX00_CASTING_HPP
#define EX00_CASTING_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

class Casting {

 public:
  Casting();

  Casting(const std::string &str);

  virtual ~Casting();

  Casting(Casting const &other);

  Casting &operator=(Casting const &other);

  virtual void print() = 0;

  const std::string &getCastString() const;

  class ImpossibleException : public std::exception {
   public:
    const char *what() const throw() {
      return "impossible";
    }
  };

  class NonDisplayableException : public std::exception {
   public:
    const char *what() const throw() {
      return "Non displayable";
    }
  };

 protected:
  virtual void parseChar() = 0;

  virtual void parseInt() = 0;

  virtual void parseFloat();

  virtual void parseDouble();

  virtual void printInt();

  virtual void printChar();

  virtual void printFloat();

  virtual void printDouble();

  std::string castString;

  int intValue;

  char charValue;

  float floatValue;

  double doubleValue;

};

#endif //EX00_CASTING_HPP
