//
// Created by Anderson Porto on 8/15/22.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string name);

int main() {
  Zombie *zombieHeap = newZombie("Heap");

  zombieHeap->announce();
  delete zombieHeap;

  randomChump("Stack");
  return 0;
}
