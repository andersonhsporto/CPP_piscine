
#define GREEN "\033[1;32m"
#include "Bureaucrat.hpp"
#include "Form.hpp"

void testFormGradeTooLow();
void testFormGradeTooHigh();
void testSignFormOk();
void testSignFormLowGrade();

int main() {
  testFormGradeTooHigh();
  testFormGradeTooLow();
  testSignFormOk();
  testSignFormLowGrade();
  return 0;
}

void testFormGradeTooHigh() {
  std::cout << GREEN << "------------BEGIN TEST------------" << RESET << std::endl;
  try {
    Form *form = new Form("Form", 0, 1);

    std::cout << *form << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }
  std::cout << GREEN << "------------END TEST------------" << RESET << std::endl;
}

void testFormGradeTooLow() {
  std::cout << GREEN << "------------BEGIN TEST------------" << RESET << std::endl;
  try {
    Form *form = new Form("Form", 151, 1);

    std::cout << *form << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }
  std::cout << GREEN << "------------END TEST------------" << RESET << std::endl;
}

void testSignFormOk() {
  std::cout << GREEN << "------------BEGIN TEST------------" << RESET << std::endl;
  Bureaucrat *bureaucrat = new Bureaucrat("Anderson", 1);
  Form *form = new Form("42a", 1, 1);

  try {
    form->beSigned(*bureaucrat);
    std::cout << *form << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }
  delete bureaucrat;
  delete form;
  std::cout << GREEN << "------------END TEST------------" << RESET << std::endl;
}

void testSignFormLowGrade() {
  std::cout << GREEN << "------------BEGIN TEST------------" << RESET << std::endl;
  Bureaucrat *bureaucrat = new Bureaucrat("Anderson", 150);
  Form *form = new Form("42a", 1, 1);

  try {
    form->beSigned(*bureaucrat);
    std::cout << *form << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }
  delete bureaucrat;
  delete form;
  std::cout << GREEN << "------------END TEST------------" << RESET << std::endl;
}