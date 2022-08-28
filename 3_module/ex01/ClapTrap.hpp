//
// Created by Anderson Porto on 8/28/22.
//

#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <string>

#define CONSTRUCTOR         "Default constructor called"
#define PARAM_CONSTRUCTOR   "Parametric constructor called"
#define COPY_CONSTRUCTOR    "Copy constructor called"
#define GETTER              "Getter member function called"
#define ASSIGNMENT          "Copy assignment operator called"
#define DESTRUCTOR          "Destructor called"

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

    virtual
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
