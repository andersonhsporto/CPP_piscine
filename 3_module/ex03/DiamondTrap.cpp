//
// Created by Anderson Porto on 8/28/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << D_CONSTRUCTOR << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) :
ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    std::cout << D_PARAM_CONSTRUCTOR << std::endl;
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
    std::cout << D_COPY_CONSTRUCTOR << std::endl;
    *this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
    std::cout << D_ASSIGNMENT << std::endl;
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
    std::cout << D_DESTRUCTOR << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << BLUE << "\n---------------------------------------\n"
	<< "\nWho am I\nDiamontTrap name: \t" << this->name;
    std::cout << "\nClapTrap name: \t\t" << ClapTrap::name << "\n"
	<< "\n---------------------------------------\n" << RESET << std::endl;
}

const std::string& DiamondTrap::GetName1() const
{
    return name;
}

std::ostream& operator<<(std::ostream &outStream, DiamondTrap const &diamondtrap)
{
    outStream << GREEN << "\n---------------------------------------\n";
    outStream << "\tDiamondTrap Name: \t" << diamondtrap.GetName1();
    outStream << "\n\tClapTrap Name: \t\t" << diamondtrap.GetName();
    outStream << "\n\tHit Points: " << diamondtrap.GetHitPoints();
    outStream << "\n\tEnergy Points: " << diamondtrap.GetEnergyPoints();
    outStream << "\n\tAttack Damage: " << diamondtrap.GetAttackDamage();
    outStream << "\n---------------------------------------\n" << RESET;

    return (outStream);
}



