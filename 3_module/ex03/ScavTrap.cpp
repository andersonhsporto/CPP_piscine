//
// Created by Anderson Porto on 8/28/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
  std::cout << S_CONSTRUCTOR << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  std::cout << S_PARAM_CONSTRUCTOR << std::endl;
  this->hitPoints = (100);
  this->energyPoints = (50);
  this->attackDamage = (20);
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap() {
  std::cout << S_COPY_CONSTRUCTOR << std::endl;
  *this = scavTrap;
}

ScavTrap::~ScavTrap() {
  std::cout << S_DESTRUCTOR << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
  std::cout << S_ASSIGNMENT << std::endl;
  if (this != &scavTrap) {
    this->name = scavTrap.GetName();
    this->hitPoints = scavTrap.GetHitPoints();
    this->energyPoints = scavTrap.GetEnergyPoints();
    this->attackDamage = scavTrap.GetAttackDamage();
  }
  return *this;
}

void ScavTrap::guardGate() {
  std::cout << CYAN << "ScavTrap: " << GetName()
            << " is now in Gate keeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (this->energyPoints > 0) {
    std::cout << YELLOW << "ScavTrap " << GetName();
    std::cout << " attacks " << target;
    std::cout << ", causing " << GetAttackDamage()
              << " points of damage!" << RESET << std::endl;
    this->energyPoints -= 1;
    return;
  }
  std::cout << RED << "ScavTrap " << GetName() << " is out of energy!" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &outStream, ScavTrap const &scavTrap) {
  outStream << GREEN << "\n---------------------------------------\n";
  outStream << "ScavTrap Name: \t" << scavTrap.GetName() << "\n";
  outStream << "\n\tHit Points: " << scavTrap.GetHitPoints();
  outStream << "\n\tEnergy Points: " << scavTrap.GetEnergyPoints();
  outStream << "\n\tAttack Damage: " << scavTrap.GetAttackDamage();
  outStream << "\n---------------------------------------\n" << RESET;
  return outStream;
}
