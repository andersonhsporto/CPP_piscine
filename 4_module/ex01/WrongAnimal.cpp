//
// Created by Anderson Porto on 10/4/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << PURPLE << "WrongAnimal constructor called" << RESET << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << PURPLE << "WrongAnimal Parameterized constructor called" << RESET << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
    std::cout << PURPLE << "WrongAnimal copy constructor called" << RESET << std::endl;
    this->type = wrongAnimal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
    std::cout << PURPLE << "WrongAnimal assignation operator called" << RESET << std::endl;
    if (this != &wrongAnimal)
    {
        this->type = wrongAnimal.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << PURPLE << "WrongAnimal destructor called" << RESET << std::endl;
}


void WrongAnimal::makeSound() const
{
    std::cout << PURPLE << "WrongAnimal sound" << RESET << std::endl;
}

std::string WrongAnimal::GetType() const
{
    return this->type;
}
