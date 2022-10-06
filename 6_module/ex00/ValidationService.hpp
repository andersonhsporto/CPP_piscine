//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX00_VALIDATIONSERVICE_HPP
#define EX00_VALIDATIONSERVICE_HPP

#include <string>

class ValidationService {

 public:
  ValidationService();

  ~ValidationService();

  ValidationService(ValidationService const &other);

  ValidationService &operator=(ValidationService const &other);

  bool validateString(std::string str);

  class InvalidInputException : public std::exception {
    virtual const char *what() const throw() {
      return "Invalid input";
    }
  };

 private:
  bool isValidChar(std::string str);

};

#endif //EX00_VALIDATIONSERVICE_HPP
