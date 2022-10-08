//
// Created by Anderson Porto on 10/7/22.
//

#ifndef EX00_CASTING_HPP
#define EX00_CASTING_HPP

#include <string>
#include <iostream>

class Casting {

 public:
  Casting();

  Casting(const std::string &str);

  virtual ~Casting();

  Casting(Casting const &other);

  Casting &operator=(Casting const &other);

  const std::string &getCastString() const;

  virtual void printCasting() = 0;

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


};

#endif //EX00_CASTING_HPP
