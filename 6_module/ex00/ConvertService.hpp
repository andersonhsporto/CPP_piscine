//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX00_CONVERTSERVICE_HPP
#define EX00_CONVERTSERVICE_HPP

#include <string>
#include "IntegerCasting.hpp"

class ConvertService {

 public:
  ConvertService(std::string str);

  ~ConvertService();

  ConvertService(ConvertService const &other);

  ConvertService &operator=(ConvertService const &other);

  void convert();

 private:
  ConvertService();

  bool isChar();

  bool integerNumber();

  bool isValidInt();

  bool isFloat();

  bool isDouble();

  std::string string;

  IntegerCasting *integerCasting;

};

#endif //EX00_CONVERTSERVICE_HPP
