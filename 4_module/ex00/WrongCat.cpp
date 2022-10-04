//
// Created by Anderson Porto on 10/4/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << YELLOW << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string& type) : WrongAnimal(type)
{
    std::cout << YELLOW << "WrongCat Parameterized constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) : WrongAnimal(wrongCat)
{
    std::cout << YELLOW << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
    std::cout << YELLOW << "WrongCat assignation operator called" << std::endl;
    if (this != &wrongCat)
    {
        this->type = wrongCat.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << YELLOW << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << YELLOW << "WrongCat sound" << std::endl;
}
