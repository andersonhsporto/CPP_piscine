//
// Created by Anderson Porto on 8/28/22.
//

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << S_CONSTRUCTOR << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << S_PARAM_CONSTRUCTOR << std::endl;
    this->hitPoints = (100);
    this->energyPoints = (50);
    this->energyPoints = (50);
    this->attackDamage = (20);
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap()
{
    std::cout << S_COPY_CONSTRUCTOR << std::endl;
    *this = scavTrap;
}

ScavTrap::~ScavTrap()
{
    std::cout << S_DESTRUCTOR << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
    std::cout << S_ASSIGNMENT << std::endl;
    if (this != &scavTrap)
    {
        this->name = scavTrap.GetName();
        this->hitPoints = scavTrap.GetHitPoints();
        this->energyPoints = scavTrap.GetEnergyPoints();
        this->attackDamage = scavTrap.GetAttackDamage();
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << GetName() << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << GetName();
    std::cout << " attacks " << target;
    std::cout << ", causing " << GetAttackDamage() << " points of damage!" << std::endl;
}




