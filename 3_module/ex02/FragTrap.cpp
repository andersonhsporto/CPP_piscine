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
	this->name = name;
    this->hitPoints = (100);
    this->energyPoints = (100);
    this->attackDamage = (30);
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap()
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

void FragTrap::highFivesGuys(void)
{
    std::cout << BLUE << GetName() << ": Positive high fives!!" << RESET << std::endl;
}


std::ostream& operator<<(std::ostream &outStream, FragTrap const &fragTrap)
{
    outStream << GREEN << "\n---------------------------------------\n";
    outStream << "FragTrap Name: \t" << fragTrap.GetName() << "\n";
    outStream << "\n\tHit Points: " << fragTrap.GetHitPoints();
    outStream << "\n\tEnergy Points: " << fragTrap.GetEnergyPoints();
    outStream << "\n\tAttack Damage: " << fragTrap.GetAttackDamage();
    outStream << "\n---------------------------------------\n" << RESET;
	return outStream;
}