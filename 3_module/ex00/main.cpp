#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("CL4P-TP");

    clapTrap.attack("Randy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);
    return 0;
}