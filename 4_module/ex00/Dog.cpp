//
// Created by Anderson Porto on 9/16/22.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << RED << "default constructor\n" << RESET << std::endl;
}


Dog::Dog(const Dog& dog) : Animal(dog)
{
    std::cout << RED << "copy constructor" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << RED << "destructor" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    std::cout << RED << "assigment operator" << RESET << std::endl;
    if (this != &dog)
    {
        this->type = dog.GetType();
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << RED << "makeSound: AuAu" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& outStream, const Dog& dog)
{
    outStream << RED << "Dog type:\t" << dog.GetType() << RESET << std::endl;
    return outStream;
}

