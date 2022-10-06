//
// Created by Anderson Porto on 10/6/22.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
  std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &intern) {
  std::cout << "Intern Copy constructor called" << std::endl;
  *this = intern;

}

Intern &Intern::operator=(const Intern &intern) {
  std::cout << "Intern Assignation operator called" << std::endl;
  if (this != &intern) {
    *this = intern;
  }
  return *this;
}

Intern::~Intern() {
  std::cout << "Intern Destructor called" << std::endl;

}

AForm *Intern::makeForm(const std::string &name, const std::string &target) {
  switch (formSelector(name)) {
    case SHUBBERRY_CREATION_FORM:std::cout << "Intern creates " << name << std::endl;
      return new ShrubberyCreationForm(target);
    case ROBOTOMY_REQUEST_FORM:std::cout << "Intern creates " << name << std::endl;
      return new RobotomyRequestForm(target);
    case PRESIDENTIAL_PARDON_FORM:std::cout << "Intern creates " << name << std::endl;
      return new PresidentialPardonForm(target);
    default:std::cout << "Intern can't create " << name << std::endl;
      return NULL;
  }
}

int Intern::formSelector(const std::string &name) {
  std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
  int index = 0;

  while (index < 3 && forms[index] != name) {
    index++;
  }
  return index;
}


