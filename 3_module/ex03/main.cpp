#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("Original");

    diamondTrap.attack("Frag");
    diamondTrap.highFivesGuys();
    diamondTrap.whoAmI();
    return 0;
}
