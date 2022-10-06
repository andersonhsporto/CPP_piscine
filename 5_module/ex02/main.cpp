
#define GREEN "\033[1;32m"

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
  Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);
  ShrubberyCreationForm *shrub = new ShrubberyCreationForm("Shrubbery");
  RobotomyRequestForm *robotomy = new RobotomyRequestForm("Robotomy");
  PresidentialPardonForm *presidential = new PresidentialPardonForm("Presidential");

  std::cout << GREEN << "Bureaucrat sign form" << RESET << std::endl;
  robotomy->beSigned(*bureaucrat);
  shrub->beSigned(*bureaucrat);
  presidential->beSigned(*bureaucrat);
  std::cout << GREEN << "Bureaucrat execute form" << RESET << std::endl;
  bureaucrat->executeForm(*shrub);
  bureaucrat->executeForm(*robotomy);
  bureaucrat->executeForm(*presidential);

  delete bureaucrat;
  delete shrub;
  delete robotomy;
  delete presidential;
  return 0;
}
