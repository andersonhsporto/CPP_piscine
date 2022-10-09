//
// Created by Anderson Porto on 10/7/22.
//

#ifndef EX00_CASTING_HPP
#define EX00_CASTING_HPP

#include <string>
#include <iostream>

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

  const std::string &getCastString() const;

  virtual void printCasting() = 0;

  bool IsPseudoLiteral();

  class ImpossibleException : public std::exception {
   public:
    const char *what() const throw() {
      return "impossible";
    }
  };

 protected:
  virtual void castTo();

  virtual bool isValueValid();

  void isNotValid();

  std::string castString;

 private:
  bool isChar();

  bool isInt();

  bool isFloat();

  bool isDouble();
};

#endif //EX00_CASTING_HPP
