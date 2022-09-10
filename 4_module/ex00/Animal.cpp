//
// Created by Anderson Porto on 9/10/22.
//

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << CYAN << "Animal default constructor" << RESET << std::endl;
    this->type = "Default Animal";
}

Animal::Animal(const std::string& type)
{
    std::cout << CYAN << "Animal parameterized constructor ->\t";
    std::cout << "type is:\t" << type << RESET << std::endl;
    this->type = type;
}

Animal::~Animal()
{
    std::cout << CYAN << "Animal destructor" << RESET << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << CYAN << "Animal copy constructor" << RESET << std::endl;
    *this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
    std::cout << CYAN << "Animal assigment operator" << RESET << std::endl;
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

void Animal::makeSound() const
{
    std::cout << CYAN << "Animal: default sound" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& outStream, const Animal& animal)
{
    outStream << CYAN << "Animal:\t" << animal.GetType() << RESET << std::endl;
    return outStream;
}
