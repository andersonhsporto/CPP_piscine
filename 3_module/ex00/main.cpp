#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("TESTE");

    clapTrap.attack("FONE");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);
    return 0;
}