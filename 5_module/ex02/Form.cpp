//
// Created by Anderson Porto on 10/5/22.
//

#include <iostream>
#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(1), gradeToExecute(1) {
  std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :
    name(name),
    isSigned(false),
    gradeToSign(gradeToSign),
    gradeToExecute(gradeToExecute) {

  std::cout << "Form constructor called" << std::endl;
  if (gradeToSign < 1 || gradeToExecute < 1) {
    throw Form::GradeTooHighException();
  } else if (gradeToSign > 150 || gradeToExecute > 150) {
    throw Form::GradeTooLowException();
  }
}

Form::Form(const Form &form) :
    name(form.name),
    isSigned(form.isSigned),
    gradeToSign(form.gradeToSign),
    gradeToExecute(form.gradeToExecute) {

  std::cout << "Form copy constructor called" << std::endl;
  *this = form;
}

Form &Form::operator=(const Form &form) {
  std::cout << "Form assignation operator called" << std::endl;
  if (this != &form) {
    this->isSigned = form.isSigned;
  }
  return *this;
}

Form::~Form() {
  std::cout << "Form destructor called" << std::endl;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->gradeToSign) {
    throw Form::GradeTooLowException();
  } else if (this->isSigned) {
    std::cout << bureaucrat.getName() << " couldn't sign " << this->name
              << " because it's already signed" << std::endl;
  } else {
    this->isSigned = true;
    std::cout << bureaucrat.getName() << " signs Form: " << this->name << std::endl;
  }
}

const std::string &Form::getName() const {
  return name;
}

bool Form::isSigned1() const {
  return isSigned;
}

int Form::getGradeToSign() const {
  return gradeToSign;
}

int Form::getGradeToExecute() const {
  return gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
  out << "Form name: " << form.getName() << std::endl;
  out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
  out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
  if (form.isSigned1()) {
    out << "Form is signed" << std::endl;
  } else {
    out << "Form is not signed" << std::endl;
  }
  return out;
}
