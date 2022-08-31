//
// Created by Anderson Porto on 8/28/22.
//

#ifndef EX03_SCAVTRAP_HPP
#define EX03_SCAVTRAP_HPP


#include "ClapTrap.hpp"


#define S_CONSTRUCTOR         "ScavTrap Default constructor called"
#define S_PARAM_CONSTRUCTOR   "ScavTrap Parametric constructor called"
#define S_COPY_CONSTRUCTOR    "ScavTrap Copy constructor called"
#define S_GETTER              "ScavTrap Getter member function called"
#define S_ASSIGNMENT          "ScavTrap Copy assignment operator called"
#define S_DESTRUCTOR          "ScavTrap Destructor called"

#define CYAN	"\033[1;36m"

class ScavTrap : public virtual ClapTrap
{

public:
    ScavTrap();

    ScavTrap(const std::string& name);

    ScavTrap(const ScavTrap &scavTrap);

    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& scavTrap);

    void guardGate();

	void attack(const std::string& target);

};

std::ostream& operator<<(std::ostream &outStream, ScavTrap const &scavTrap);

#endif //EX03_SCAVTRAP_HPP
