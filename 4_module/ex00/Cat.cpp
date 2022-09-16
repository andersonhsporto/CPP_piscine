//
// Created by Anderson Porto on 9/10/22.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << ORANGE << "default constructor\n" << RESET << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
    std::cout << ORANGE << "copy constructor" << RESET << std::endl;
}

Cat::~Cat()
{
    std::cout << ORANGE << "destructor" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    std::cout << ORANGE << "assigment operator" << RESET << std::endl;
    if (this != &cat)
    {
        this->type = cat.GetType();
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << ORANGE << "makeSound: Miau" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& outStream, const Cat& cat)
{
    outStream << ORANGE << "Cat type:\t" << cat.GetType() << RESET << std::endl;
    return outStream;
}
