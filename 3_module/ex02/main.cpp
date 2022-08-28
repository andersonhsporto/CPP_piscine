#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clapTrap("Original");
    FragTrap fragTrap("Frag");

    clapTrap.attack("Frag");
    fragTrap.highFivesGuys();
    return 0;
}
