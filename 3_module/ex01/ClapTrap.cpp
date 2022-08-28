//
// Created by Anderson Porto on 8/28/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << CONSTRUCTOR << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name)
{
    std::cout << PARAM_CONSTRUCTOR << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    std::cout << COPY_CONSTRUCTOR << std::endl;
    *this = claptrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << DESTRUCTOR << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
    std::cout << ASSIGNMENT << std::endl;
    if (this != &clapTrap)
    {
        this->name = clapTrap.GetName();
        this->hitPoints = clapTrap.GetHitPoints();
        this->energyPoints = clapTrap.GetEnergyPoints();
        this->attackDamage = clapTrap.GetAttackDamage();
    }
    return *this;
}

const std::string& ClapTrap::GetName() const
{
    return name;
}

int ClapTrap::GetHitPoints() const
{
    return hitPoints;
}

int ClapTrap::GetEnergyPoints() const
{
    return energyPoints;
}

int ClapTrap::GetAttackDamage() const
{
    return attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << GetName();
    std::cout << " attacks " << target;
    std::cout << ", causing " << GetAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << GetName();
    std::cout << " receive damage of " <<  amount;
    std::cout << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << GetName();
    std::cout << " repairs itself, " << amount << " hit points restored!" << std::endl;
}
