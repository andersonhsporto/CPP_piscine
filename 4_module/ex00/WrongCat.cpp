//
// Created by Anderson Porto on 10/4/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << YELLOW << "WrongCat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(std::string &type) : WrongAnimal(type) {
  std::cout << YELLOW << "WrongCat Parameterized constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat) {
  std::cout << YELLOW << "WrongCat copy constructor called" << RESET << std::endl;
  *this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
  std::cout << YELLOW << "WrongCat assignation operator called" << RESET << std::endl;
  if (this != &wrongCat) {
    this->type = wrongCat.type;
  }
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << YELLOW << "WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << YELLOW << "WrongCat sound" << RESET << std::endl;
}
