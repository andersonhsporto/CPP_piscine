//
// Created by Anderson Porto on 10/2/22.
//

#include "Dog.hpp"

#define BLUE "\033[1;34m"

Dog::Dog() : Animal("Dog") {
  std::cout << BLUE << "Dog Default Constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
  std::cout << BLUE << "Dog Copy Constructor called" << RESET << std::endl;
  *this = dog;
}

Dog::~Dog() {
  std::cout << BLUE << "Dog Destructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout << BLUE << "Dog Assignment Operator called" << RESET << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void Dog::makeSound() const {
  std::cout << BLUE << "Dog Sound" << RESET << std::endl;
}

