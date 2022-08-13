#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : name(name)
{
}

Zombie::~Zombie()
{
    std::cout << name << ":\tzombie has been destroyed" << std::endl;
}

const std::string& Zombie::GetName() const
{
    return name;
}

void Zombie::SetName(const std::string& name)
{
    Zombie::name = name;
}


void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
