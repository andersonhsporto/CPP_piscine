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
    std::cout << "Animal copy constructor" << std::endl;
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

std::ostream& operator<<(std::ostream& outStream, const Animal& animal)
{
    outStream << CYAN << "Animal: " << animal.GetType() << RESET << std::endl;
    return outStream;
}
