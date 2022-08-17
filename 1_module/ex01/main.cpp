//
// Created by Anderson Porto on 8/15/22.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
void    testAndDeleteHorde( Zombie *horde, int size );
void    recursiveAnnounce( int N, Zombie *horde );

int main()
{
    Zombie* newZombieHorde = zombieHorde( 4, "Michael" );

    testAndDeleteHorde(newZombieHorde, 4);
    newZombieHorde = zombieHorde( 2, "Peach" );

    testAndDeleteHorde(newZombieHorde, 2);
    newZombieHorde = zombieHorde( 7, "Mario" );

    testAndDeleteHorde(newZombieHorde, 7);
    return 0;
}

void    testAndDeleteHorde( Zombie *horde, int size )
{
    std::cout << RED << "New Zombie horde of " << size;
    std::cout << " zombies named " << horde[0].GetName() << "\n" << END << std::endl;
    recursiveAnnounce( size, horde );
    std::cout << RED << "\n\tDestroying All\n" << END << std::endl;
    delete[](horde);
}

void    recursiveAnnounce( int N, Zombie *horde )
{
    if (N > 0)
    {
        horde[N - 1].announce();
        recursiveAnnounce( N - 1, horde );
    }
    return;
}
