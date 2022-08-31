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

unsigned int ClapTrap::GetHitPoints() const
{
    return hitPoints;
}

unsigned int ClapTrap::GetEnergyPoints() const
{
    return energyPoints;
}

unsigned int ClapTrap::GetAttackDamage() const
{
    return attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		std::cout << YELLOW << "ClapTrap " << GetName();
		std::cout << " attacks " << target;
		std::cout << ", causing " << GetAttackDamage() << " points of damage!" << RESET << std::endl;
		this->energyPoints -= 1;
		return;
	}
	std::cout << "ClapTrap " << GetName() << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << RED << "ClapTrap " << GetName();
		std::cout << " receive damage of " <<  amount;
		std::cout << " points of damage!" << RESET << std::endl;
		this->hitPoints -= amount;
		return;
	}
	std::cout << "ClapTrap " << GetName() << " is out of hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << BLUE << "ClapTrap " << GetName();
		std::cout << " repairs itself, " << amount << " hit points restored!" << RESET << std::endl;
		this->hitPoints += amount;
		this->energyPoints -= 1;
		return;
	}
	std::cout << "ClapTrap " << GetName() << " is out of energy!" << std::endl;
}


std::ostream& operator<<(std::ostream &outStream, ClapTrap const &clapTrap)
{
    outStream << GREEN << "\n---------------------------------------\n";
    outStream << "Claptrap Name: \t" << clapTrap.GetName() << "\n";
    outStream << "\n\tHit Points: " << clapTrap.GetHitPoints();
    outStream << "\n\tEnergy Points: " << clapTrap.GetEnergyPoints();
    outStream << "\n\tAttack Damage: " << clapTrap.GetAttackDamage();
    outStream << "\n---------------------------------------\n" << RESET;
	return outStream;
}