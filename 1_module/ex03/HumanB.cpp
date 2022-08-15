//
// Created by Anderson Porto on 8/15/22.
//

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : Name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& type)
{
    HumanB::type = &type;
}

void HumanB::attack()
{
    std::cout << Name << " attacks with their ";
    std::cout << type->getType() << std::endl;
}
