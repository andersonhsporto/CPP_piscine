#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("CL4P-TP");

	std::cout << clapTrap << std::endl;

    clapTrap.attack("Randy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);

	std::cout << clapTrap << std::endl;
    return 0;
}