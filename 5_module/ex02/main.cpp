
#define GREEN "\033[1;32m"

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main() {
  ShrubberyCreationForm *shrub = new ShrubberyCreationForm("teste");
  Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);

//  std::cout << GREEN << "Bureaucrat sign form" << std::endl;
//  shrub.beSigned(*bureaucrat);
  shrub->execute(*bureaucrat);
  return 0;
}
