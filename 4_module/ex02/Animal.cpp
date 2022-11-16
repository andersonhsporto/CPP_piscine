//
// Created by Anderson Porto on 10/2/22.
//

#include "Animal.hpp"

Animal::Animal() {
  std::cout << RED << "Animal Default Constructor called" << RESET << std::endl;
  this->type = "Default Type";
}

Animal::Animal(std::string type) {
  std::cout << RED << "Animal Parameterized Constructor called" << RESET << std::endl;
  this->type = type;
}

Animal::Animal(const Animal &animal) {
  std::cout << RED << "Animal Copy Constructor called" << RESET << std::endl;
  *this = animal;
}

Animal::~Animal() {
  std::cout << RED << "Animal Destructor called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
  std::cout << RED << "Animal Assignment Operator called" << RESET << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void Animal::makeSound() const {
  std::cout << RED << "Animal Sound" << RESET << std::endl;
}

const std::string &Animal::GetType() const {
  return this->type;
}
