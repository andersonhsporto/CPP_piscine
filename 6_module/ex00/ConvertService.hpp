//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX00_CONVERTSERVICE_HPP
#define EX00_CONVERTSERVICE_HPP

#include <string>

class ConvertService {

 public:
  ConvertService(std::string str);

  ~ConvertService();

  ConvertService(ConvertService const &other);

  ConvertService &operator=(ConvertService const &other);

  static void convert(char *str);

 private:
  ConvertService();

  char character;
  int integer;
  float floating;
  double doublePrecision;

};

#endif //EX00_CONVERTSERVICE_HPP
