//
// Created by Anderson Porto on 8/15/22.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "HumanA.hpp"

class HumanB {

 public:
  HumanB(const std::string &name);

  ~HumanB();

  void attack();

  void setWeapon(Weapon &type);

 private:
  std::string Name;

  Weapon *type;

};

#endif //EX03_HUMANB_HPP
