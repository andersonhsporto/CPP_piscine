#include "Bureaucrat.hpp"
#include "Intern.hpp"

void testShubberyCreationForm(std::string target);

void testRobotomyRequestForm(std::string target);

void testPresidentialPardonForm(std::string target);

int main() {
  testShubberyCreationForm("ARQUIVO");
  testRobotomyRequestForm("BENDER");
  testPresidentialPardonForm("MARVIN");
  return 0;
}

void testShubberyCreationForm(std::string target) {
  std::cout << RED << "\n\nTest ShrubberyCreationForm" << RESET << std::endl;
  Intern intern;
  Bureaucrat *bureaucrat = new Bureaucrat("Anderson", 1);
  AForm *form;

  form = intern.makeForm("shrubbery creation", target);
  form->beSigned(*bureaucrat);
  form->execute(*bureaucrat);
  delete bureaucrat;
  delete form;
}

void testRobotomyRequestForm(std::string target) {
  std::cout << RED << "\n\nTest RobotomyRequestForm" << RESET << std::endl;
  Intern intern;
  Bureaucrat *bureaucrat = new Bureaucrat("Anderson", 1);
  AForm *form;

  form = intern.makeForm("robotomy request", target);
  form->beSigned(*bureaucrat);
  form->execute(*bureaucrat);
  delete bureaucrat;
  delete form;
}

void testPresidentialPardonForm(std::string target) {
  std::cout << RED << "\n\nTest PresidentialPardonForm" << RESET << std::endl;
  Intern intern;
  Bureaucrat *bureaucrat = new Bureaucrat("Anderson", 1);
  AForm *form;

  form = intern.makeForm("presidential pardon", target);
  form->beSigned(*bureaucrat);
  form->execute(*bureaucrat);
  delete bureaucrat;
  delete form;
}
