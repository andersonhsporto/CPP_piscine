//
// Created by Anderson Porto on 8/28/22.
//

#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP


#include <ostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
    DiamondTrap();

    explicit DiamondTrap(const std::string& name);

    DiamondTrap(DiamondTrap const &src);

    ~DiamondTrap();

    DiamondTrap& operator=(DiamondTrap const &src);

    void whoAmI();

private:
    std::string name;

};


#endif //EX03_DIAMONDTRAP_HPP
