//
// Created by anderson on 10/08/22.
//

#include "Zombie.hpp"

Zombie* newZombie(std:: string name);
void    randomChump(std::string name);

int main()
{
    Zombie* zombieHeap = newZombie("Heap");
    zombieHeap->announce();

    randomChump("Stack");
    delete zombieHeap;
    return 0;
}
