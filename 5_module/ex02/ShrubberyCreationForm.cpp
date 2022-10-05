//
// Created by Anderson Porto on 10/5/22.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
  std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) {
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
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->getGradeToSign()) {
    throw AForm::GradeTooLowException();
  } else if (this->isSigned1()) {
    std::cout << bureaucrat.getName() << " couldn't sign " << getName()
              << " because it's already signed" << std::endl;
  } else {
    this->setIsSigned(true);
    std::cout << bureaucrat.getName() << " signs AForm: " << this->getName() << std::endl;
  }
}

ShrubberyCreationForm::ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::string filename = this->target + "_shrubbery";
    std::ofstream file(filename.c_str());

    std::cout << executor.getName() << " executes " << this->getName() << std::endl;
    file.open(this->target + "_shrubbery");
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
