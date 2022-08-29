//
// Created by Anderson Porto on 8/28/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const std::string& name)
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(), ScavTrap(src), FragTrap(src)
{
    *this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
    if (this == &src)
    {
        this->name = src.GetName();
        this->hitPoints = src.GetHitPoints();
        this->energyPoints = src.GetEnergyPoints();
        this->attackDamage = src.GetAttackDamage();
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::whoAmI()
{
    std::cout << "\nWho am I\nDiamontTrap name: \t" << this->name;
    std::cout << "\nClapTrap name: \t\t" << ClapTrap::name << std::endl;
}



