//
// Created by Anderson Porto on 10/5/22.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#define BLUE "\033[1;34m"
#define RESET "\033[0m"

#include <string>
#include <iostream>

class Bureaucrat {

 public:
  Bureaucrat();

  Bureaucrat(const std::string &name, int grade);

  ~Bureaucrat();

  Bureaucrat(const Bureaucrat &other);

  Bureaucrat &operator=(const Bureaucrat &other);

  void incrementGrade();

  void decrementGrade();

  const std::string &getName() const;

  int getGrade() const;

  void setGrade(int grade);

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw() {
      return "Grade too high Exception";
    }
  };

  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw() {
      return "Grade too low Exception";
    }
  };

 private:
  std::string const name;

  int grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP


