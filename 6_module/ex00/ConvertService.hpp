//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX00_CONVERTSERVICE_HPP
#define EX00_CONVERTSERVICE_HPP

#include <string>
#include "IntegerCasting.hpp"
#include "CharCasting.hpp"
#include "FloatCasting.hpp"
#include "DoubleCasting.hpp"

class ConvertService {

 public:
  ConvertService(std::string str);

  ~ConvertService();

  ConvertService(ConvertService const &other);

  ConvertService &operator=(ConvertService const &other);

  void convert();

 private:
  ConvertService();

  std::string string;

  CharCasting *charCasting;

  IntegerCasting *integerCasting;

  FloatCasting *floatCasting;

  DoubleCasting *doubleCasting;

};

#endif //EX00_CONVERTSERVICE_HPP
