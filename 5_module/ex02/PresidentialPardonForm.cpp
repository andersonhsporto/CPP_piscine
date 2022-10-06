//
// Created by Anderson Porto on 10/6/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(
    "PresidentialPardonForm",
    25,
    5), target(target) {

  std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form)
    : AForm(form), target(form.target) {

  std::cout << "PresidentialPardonForm copy constructor" << std::endl;
  *this = form;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form) {
  std::cout << "PresidentialPardonForm assignation operator" << std::endl;
  if (this != &form) {
    this->setIsSigned(form.isSigned1());
    this->setGradeToExecute(form.getGradeToExecute());
    this->setGradeToSign(form.getGradeToSign());
  }
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {

  AForm::execute(executor);
  std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm(
    "PresidentialPardonForm",
    25,
    5), target("default") {

  std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}
