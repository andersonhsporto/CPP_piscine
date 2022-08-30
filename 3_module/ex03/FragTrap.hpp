//
// Created by Anderson Porto on 8/28/22.
//

#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define F_CONSTRUCTOR         "FragTrap Default constructor called"
#define F_PARAM_CONSTRUCTOR   "FragTrap Parametric constructor called"
#define F_COPY_CONSTRUCTOR    "FragTrap Copy constructor called"
#define F_GETTER              "FragTrap Getter member function called"
#define F_ASSIGNMENT          "FragTrap Copy assignment operator called"
#define F_DESTRUCTOR          "FragTrap Destructor called"

class FragTrap : public virtual ClapTrap
{

public:
    FragTrap();

    FragTrap(const std::string& name);

    FragTrap(const FragTrap &fragTrap);

    ~FragTrap();

    FragTrap& operator=(const FragTrap& fragTrap);

    void highFivesGuys(void);


};

std::ostream& operator<<(std::ostream &outStream, FragTrap const &fragTrap);


#endif //EX03_FRAGTRAP_HPP
