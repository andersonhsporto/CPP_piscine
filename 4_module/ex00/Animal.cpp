//
// Created by Anderson Porto on 9/10/22.
//

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << CYAN << "default constructor\n" << RESET << std::endl;
    this->type = ANIMAL_DEFAULT;
}

Animal::Animal(const std::string& type)
{
    std::cout << CYAN << "parameterized constructor ->\t";
    std::cout << "type is:\t" << type << RESET << std::endl;
    this->type = (CYAN + type + RESET);
}

Animal::~Animal()
{
    std::cout << CYAN << "destructor" << RESET << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << CYAN << "copy constructor" << RESET << std::endl;
    *this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
    std::cout << CYAN << "assigment operator" << RESET << std::endl;
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
    std::cout << CYAN << "makeSound: default sound" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& outStream, const Animal& animal)
{
    outStream << CYAN << "Animal:\t" << animal.GetType() << RESET << std::endl;
    return outStream;
}
