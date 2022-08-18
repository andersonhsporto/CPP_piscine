//
// Created by Anderson Porto on 8/15/22.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}
