//
// Created by Anderson Porto on 9/10/22.
//

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal copy construtor" << std::endl;
    *this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
    if (this != &animal)
    {
        this->type = animal.GetType();
    }
    return *this;
}

const std::string& Animal::GetType() const
{
    return type;
}
