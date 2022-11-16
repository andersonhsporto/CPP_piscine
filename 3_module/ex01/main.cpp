#include "ScavTrap.hpp"

int main() {
  ScavTrap scavTrap("CL4P-TP");

  std::cout << scavTrap << std::endl;

  scavTrap.attack("Randy");
  scavTrap.guardGate();

  std::cout << scavTrap << std::endl;
  return 0;
}