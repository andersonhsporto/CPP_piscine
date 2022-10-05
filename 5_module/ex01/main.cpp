#include "Bureaucrat.hpp"

void testGradeTooHighException();
void testGradeTooLowException();

int main() {
  testGradeTooHighException();
  std::cout << "---------------------------------" << std::endl;
  testGradeTooLowException();
  return 0;
}

void testGradeTooHighException() {
  Bureaucrat bureaucrat("Anderson", 1);

  try {
    bureaucrat.incrementGrade();
  } catch (std::exception &e) {
    std::cout << bureaucrat << std::endl;
    std::cout << e.what() << std::endl;
  }
}

void testGradeTooLowException() {
  Bureaucrat bureaucrat("Anderson", 150);

  try {
    bureaucrat.decrementGrade();
  } catch (std::exception &e) {
    std::cout << bureaucrat << std::endl;
    std::cout << e.what() << std::endl;
  }
}