//
// Created by Anderson Porto on 10/5/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(1) {
  std::cout << BLUE << "Bureaucrat default constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
  std::cout << BLUE << "Bureaucrat parameterized constructor called" << RESET << std::endl;
  if (grade < 1)
    throw GradeTooHighException();
  else if (grade > 150)
    throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
  std::cout << BLUE << "Bureaucrat destructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
  std::cout << BLUE << "Bureaucrat copy constructor called" << RESET << std::endl;
  *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  std::cout << BLUE << "Bureaucrat assignation operator called" << RESET << std::endl;
  if (this != &other) {
    this->grade = other.grade;
  }
  return *this;
}

void Bureaucrat::incrementGrade() {
  if (grade - 1 < 1)
    throw GradeTooHighException();
  else
    grade--;
}

void Bureaucrat::decrementGrade() {
  if (grade + 1 > 150)
    throw GradeTooLowException();
  else
    grade++;
}

const std::string &Bureaucrat::getName() const {
  return name;
}

int Bureaucrat::getGrade() const {
  return grade;
}

void Bureaucrat::setGrade(int grade) {
  Bureaucrat::grade = grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
  out <<
      BLUE <<
      bureaucrat.getName() <<
      ", bureaucrat grade " <<
      bureaucrat.getGrade() <<
      RESET <<
      std::endl;
  return out;
}
