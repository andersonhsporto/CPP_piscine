
#define GREEN "\033[1;32m"

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  ShrubberyCreationForm *shrub = new ShrubberyCreationForm("home");
  Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);

  std::cout << GREEN << "Bureaucrat sign form" << std::endl;
  shrub->beSigned(*bureaucrat);
  shrub->execute(*bureaucrat);
  return 0;
}
