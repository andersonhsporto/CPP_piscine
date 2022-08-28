//
// Created by Anderson Porto on 8/28/22.
//

#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <string>
#include <iostream>

#define CONSTRUCTOR         "ClapTrap Default constructor called"
#define PARAM_CONSTRUCTOR   "ClapTrap Parametric constructor called"
#define COPY_CONSTRUCTOR    "ClapTrap Copy constructor called"
#define GETTER              "ClapTrap Getter member function called"
#define ASSIGNMENT          "ClapTrap Copy assignment operator called"
#define DESTRUCTOR          "ClapTrap Destructor called"

class ClapTrap
{
public:
    ClapTrap();

    ClapTrap(const std::string& name);

    ClapTrap(const ClapTrap &claptrap);

    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& clapTrap);

    const std::string& GetName() const;

    int GetHitPoints() const;

    int GetEnergyPoints() const;

    int GetAttackDamage() const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);


protected:
    std::string name;
    int         hitPoints;
    int         energyPoints;
    int         attackDamage;

};


#endif //EX01_CLAPTRAP_HPP
