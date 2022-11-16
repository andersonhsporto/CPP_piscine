//
// Created by Anderson Porto on 8/15/22.
//

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &type) : Name(name), Type(type) {
}

HumanA::~HumanA() {
}

const Weapon &HumanA::getType() const {
  return Type;
}

void HumanA::setType(const Weapon &type) {
  Type = type;
}

void HumanA::attack() {
  std::cout << Name << " attacks with their ";
  std::cout << Type.getType() << std::endl;
}

