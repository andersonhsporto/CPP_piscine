//
// Created by Anderson Porto on 8/15/22.
//

#include "Zombie.hpp"

Zombie::Zombie() {
  _name = "";
}

Zombie::Zombie(const std::string &_name) : _name(_name) {
}

Zombie::~Zombie() {
  std::cout << _name << ": Zombie has been destroyed" << std::endl;
}

const std::string &Zombie::GetName() const {
  return _name;
}

void Zombie::SetName(const std::string &name) {
  Zombie::_name = name;
}

void Zombie::announce() {
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
