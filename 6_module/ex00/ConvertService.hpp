//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX00_CONVERTSERVICE_HPP
#define EX00_CONVERTSERVICE_HPP

#include "IntegerCasting.hpp"
#include "CharCasting.hpp"
#include "FloatCasting.hpp"
#include "DoubleCasting.hpp"
#include <string>

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

};

#endif //EX00_CONVERTSERVICE_HPP
