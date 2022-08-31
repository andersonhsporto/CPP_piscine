//
// Created by Anderson Porto on 8/28/22.
//

#ifndef EX03_CLAPTRAP_HPP
#define EX03_CLAPTRAP_HPP

#include <string>
#include <iostream>

#define CONSTRUCTOR         "ClapTrap Default constructor called"
#define PARAM_CONSTRUCTOR   "ClapTrap Parametric constructor called"
#define COPY_CONSTRUCTOR    "ClapTrap Copy constructor called"
#define GETTER              "ClapTrap Getter member function called"
#define ASSIGNMENT          "ClapTrap Copy assignment operator called"
#define DESTRUCTOR          "ClapTrap Destructor called"

#define RED 			   "\033[1;31m"
#define GREEN 			   "\033[1;32m"
#define BLUE 			   "\033[1;34m"
#define YELLOW 			   "\033[1;33m"
#define RESET 			   "\033[0m"

class ClapTrap
{
public:
    ClapTrap();

    explicit ClapTrap(const std::string& name);

    ClapTrap(const ClapTrap &claptrap);

    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& clapTrap);

    const std::string& GetName() const;

    unsigned int GetHitPoints() const;

    unsigned int GetEnergyPoints() const;

    unsigned int GetAttackDamage() const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);


protected:
    std::string 	name;
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackDamage;

};

std::ostream& operator<<(std::ostream &outStream, ClapTrap const &claptrap);

#endif //EX03_CLAPTRAP_HPP
