//
// Created by Anderson Porto on 10/5/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(
    "ShrubberyCreationForm",
    145,
    137), target(target) {

  std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
    : AForm(form), target(form.target) {

  std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
  *this = form;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form) {
  std::cout << "ShrubberyCreationForm assignation operator" << std::endl;
  if (this != &form) {
    this->setIsSigned(form.isSigned1());
    this->setGradeToExecute(form.getGradeToExecute());
    this->setGradeToSign(form.getGradeToSign());
  }
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
  AForm::execute(executor);
  std::string filename = this->target + "_shrubbery";
  std::ofstream file(filename.c_str());

  file << "       _-_" << std::endl;
  file << "    /~~   ~~\\" << std::endl;
  file << " /~~         ~~\\" << std::endl;
  file << "{               }" << std::endl;
  file << " \\  _-     -_  /" << std::endl;
  file << "   ~  \\\\ //  ~" << std::endl;
  file << "_- -   | | _- _" << std::endl;
  file << "  _ -  | |   -_" << std::endl;
  file << "      // \\\\" << std::endl;
  file.close();
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(
    "ShrubberyCreationForm",
    145,
    137), target("default") {

  std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}