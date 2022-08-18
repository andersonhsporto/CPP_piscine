//
// Created by Anderson Porto on 8/15/22.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];

    for ( int i = 0; i < N; i++ )
        horde[i].SetName(name);
    return horde;
}
