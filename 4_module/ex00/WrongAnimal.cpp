//
// Created by Anderson Porto on 9/16/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << BLUE << "default constructor\n" << RESET << std::endl;
    this->type = WRONG_ANIMAL_DEFAULT;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
    std::cout << BLUE << "parameterized constructor ->\t";
    std::cout << "type is:\t" << type << RESET << std::endl;
    this->type = (BLUE + type + RESET);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BLUE << "destructor" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
    std::cout << BLUE << "assigment operator" << RESET << std::endl;
    if (this != &wrongAnimal)
    {
        this->type = wrongAnimal.GetType();
    }
    return *this;
}


const std::string& WrongAnimal::GetType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << BLUE << "makeSound: default sound" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& outStream, const WrongAnimal& wrongAnimal)
{
    outStream << BLUE << "WrongAnimal:\t" << wrongAnimal.GetType() << RESET << std::endl;
    return outStream;
}
