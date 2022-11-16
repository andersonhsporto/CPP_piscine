//
// Created by Anderson Porto on 8/28/22.
//

#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP

#include <ostream>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#define D_CONSTRUCTOR         "DiamondTrap Default constructor called"
#define D_PARAM_CONSTRUCTOR   "DiamondTrap Parametric constructor called"
#define D_COPY_CONSTRUCTOR    "DiamondTrap Copy constructor called"
#define D_ASSIGNMENT          "DiamondTrap Copy assignment operator called"
#define D_DESTRUCTOR          "DiamondTrap Destructor called"

#define BLUE    "\033[1;34m"
#define RESET    "\033[0m"

class DiamondTrap : public FragTrap, public ScavTrap {

 public:
  DiamondTrap();

  explicit DiamondTrap(const std::string &name);

  DiamondTrap(DiamondTrap const &src);

  ~DiamondTrap();

  DiamondTrap &operator=(DiamondTrap const &src);

  void whoAmI();

  const std::string &GetName1() const;

 private:
  std::string name;

};

std::ostream &operator<<(std::ostream &outStream, DiamondTrap const &diamondtrap);

#endif //EX03_DIAMONDTRAP_HPP
