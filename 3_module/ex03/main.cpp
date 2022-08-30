#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("Diamond");

    diamondTrap.attack("Frag");
	diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    diamondTrap.whoAmI();
    std::cout << diamondTrap << std::endl;
    return 0;
}
