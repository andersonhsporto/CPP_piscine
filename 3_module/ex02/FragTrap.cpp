//
// Created by Anderson Porto on 8/28/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << F_PARAM_CONSTRUCTOR << std::endl;
    this->hitPoints = (100);
    this->energyPoints = (100);
    this->attackDamage = (20);
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
    std::cout << F_COPY_CONSTRUCTOR << std::endl;
    *this = fragTrap;
}

FragTrap::~FragTrap()
{
    std::cout << F_DESTRUCTOR << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
    std::cout << F_ASSIGNMENT << std::endl;
    if (this != &fragTrap)
    {
        this->name = fragTrap.GetName();
        this->hitPoints = fragTrap.GetHitPoints();
        this->energyPoints = fragTrap.GetEnergyPoints();
        this->attackDamage = fragTrap.GetAttackDamage();
    }
    return *this;
}
