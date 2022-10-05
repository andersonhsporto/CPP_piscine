//
// Created by Anderson Porto on 10/5/22.
//

#include <iostream>
#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(1), gradeToExecute(1) {
  std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) :
    name(name),
    isSigned(false),
    gradeToSign(gradeToSign),
    gradeToExecute(gradeToExecute) {

  std::cout << "AForm constructor called" << std::endl;
  if (gradeToSign < 1 || gradeToExecute < 1) {
    throw AForm::GradeTooHighException();
  } else if (gradeToSign > 150 || gradeToExecute > 150) {
    throw AForm::GradeTooLowException();
  }
}

AForm::AForm(const AForm &form) :
    name(form.name),
    isSigned(form.isSigned),
    gradeToSign(form.gradeToSign),
    gradeToExecute(form.gradeToExecute) {

  std::cout << "AForm copy constructor called" << std::endl;
  *this = form;
}

AForm &AForm::operator=(const AForm &form) {
  std::cout << "AForm assignation operator called" << std::endl;
  if (this != &form) {
    this->isSigned = form.isSigned;
  }
  return *this;
}

AForm::~AForm() {
  std::cout << "AForm destructor called" << std::endl;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->gradeToSign) {
    throw AForm::GradeTooLowException();
  } else if (this->isSigned) {
    std::cout << bureaucrat.getName() << " couldn't sign " << this->name
              << " because it's already signed" << std::endl;
  } else {
    this->isSigned = true;
    std::cout << bureaucrat.getName() << " signs AForm: " << this->name << std::endl;
  }
}

const std::string &AForm::getName() const {
  return name;
}

bool AForm::isSigned1() const {
  return isSigned;
}

int AForm::getGradeToSign() const {
  return gradeToSign;
}

int AForm::getGradeToExecute() const {
  return gradeToExecute;
}

void AForm::setIsSigned(bool is_signed) {
  isSigned = is_signed;
}

void AForm::setGradeToSign(int grade_to_sign) {
  gradeToSign = grade_to_sign;
}

void AForm::setGradeToExecute(int grade_to_execute) {
  gradeToExecute = grade_to_execute;
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
  out << "AForm name: " << form.getName() << std::endl;
  out << "AForm grade to sign: " << form.getGradeToSign() << std::endl;
  out << "AForm grade to execute: " << form.getGradeToExecute() << std::endl;
  if (form.isSigned1()) {
    out << "AForm is signed" << std::endl;
  } else {
    out << "AForm is not signed" << std::endl;
  }
  return out;
}
