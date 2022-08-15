//
// Created by Anderson Porto on 8/15/22.
//

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(const std::string& type) : type(type)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& type)
{
    Weapon::type = type;
}

