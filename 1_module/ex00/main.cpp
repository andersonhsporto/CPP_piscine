//
// Created by anderson on 10/08/22.
//

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	Zombie* zombieHeap = newZombie("Heap");
	zombieHeap->announce();

	randomChump("Stack");
	delete zombieHeap;
	return 0;
}
