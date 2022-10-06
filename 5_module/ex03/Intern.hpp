//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "AForm.hpp"

class Intern {
 public:
  Intern();

  Intern(const Intern &intern);

  Intern &operator=(const Intern &intern);

  ~Intern();

  AForm *makeForm(const std::string &name, const std::string &target);

 private:
  int formSelector(const std::string &name);

  AForm *createShrubberyCreationForm(const std::string &target);

  AForm *createRobotomyRequestForm(const std::string &target);

  AForm *createPresidentialPardonForm(const std::string &target);

  enum FormType {
    SHUBBERRY_CREATION_FORM,
    ROBOTOMY_REQUEST_FORM,
    PRESIDENTIAL_PARDON_FORM,
  };
};

#endif //EX03_INTERN_HPP
