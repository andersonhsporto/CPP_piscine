//
// Created by Anderson Porto on 10/6/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(
    "RobotomyRequestForm",
    72,
    45), target(target) {

  std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
    : AForm(form), target(form.target) {

  std::cout << "RobotomyRequestForm copy constructor" << std::endl;
  *this = form;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
  std::cout << "RobotomyRequestForm assignation operator" << std::endl;
  if (this != &form) {
    this->setIsSigned(form.isSigned1());
    this->setGradeToExecute(form.getGradeToExecute());
    this->setGradeToSign(form.getGradeToSign());
  }
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
  AForm::execute(executor);
  srand(time(0));
  if (rand() % 2) {
    std::cout << this->target << " has been robotomized successfully" << std::endl;
  } else {
    std::cout << this->target << " robotomization failed" << std::endl;
  }

}

RobotomyRequestForm::RobotomyRequestForm() : AForm(
    "RobotomyRequestForm",
    72,
    45), target("default") {

  std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}
