//
// Created by Anderson Porto on 10/5/22.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <string>
#include "Bureaucrat.hpp"

class Form {
 public:
  Form();

  Form(const std::string &name, int gradeToSign, int gradeToExecute);

  Form(const Form &form);

  Form &operator=(const Form &form);

  ~Form();

  const std::string &getName() const;

  bool isSigned1() const;

  int getGradeToSign() const;

  int getGradeToExecute() const;

  void beSigned(const Bureaucrat &bureaucrat);

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw() {
      return "Form exception: Grade too high";
    }
  };

  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw() {
      return "Form exception: Grade too low";
    }
  };

 private:
  const std::string name;
  bool isSigned;
  const int gradeToSign;
  const int gradeToExecute;

};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif //EX01_FORM_HPP
