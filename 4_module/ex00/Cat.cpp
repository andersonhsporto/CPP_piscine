//
// Created by Anderson Porto on 10/4/22.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << ORANGE << "Cat Default Constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
  std::cout << ORANGE << "Cat Copy Constructor called" << RESET << std::endl;
  *this = cat;
}

Cat::~Cat() {
  std::cout << ORANGE << "Cat Destructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout << ORANGE << "Cat Assignment Operator called" << RESET << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void Cat::makeSound() const {
  std::cout << ORANGE << "Cat Sound" << RESET << std::endl;
}
