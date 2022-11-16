//
// Created by Anderson Porto on 10/6/22.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef AForm *(Intern::*formCreator)(const std::string &target);

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
  formCreator formCreators[3] = {
      &Intern::createShrubberyCreationForm,
      &Intern::createRobotomyRequestForm,
      &Intern::createPresidentialPardonForm
  };
  switch (formSelector(name)) {
    case SHUBBERRY_CREATION_FORM:std::cout << "Intern creates " << name << std::endl;
      return (this->*formCreators[0])(target);
    case ROBOTOMY_REQUEST_FORM:std::cout << "Intern creates " << name << std::endl;
      return (this->*formCreators[1])(target);
    case PRESIDENTIAL_PARDON_FORM:std::cout << "Intern creates " << name << std::endl;
      return (this->*formCreators[2])(target);
    default:std::cout << "Intern can't create " << name << std::endl;
      return NULL;
  }
}

AForm *Intern::createShrubberyCreationForm(const std::string &target) {
  return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string &target) {
  return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string &target) {
  return new PresidentialPardonForm(target);
}

int Intern::formSelector(const std::string &name) {
  std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
  int index = 0;

  while (index < 3 && forms[index] != name) {
    index++;
  }
  return index;
}
