//
// Created by Anderson Porto on 10/2/22.
//

#include "Dog.hpp"
#include "Brain.hpp"

#define BLUE "\033[1;34m"

Dog::Dog() : Animal("Dog")
{
    std::cout << BLUE << "Dog Default Constructor called" << RESET << std::endl;
    this->brain = new Brain();
}

Dog::Dog(std::string idea) : Animal(idea)
{
    std::cout << BLUE << "Dog Parameterized Constructor called" << RESET << std::endl;
    this->brain = new Brain(idea);
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
    std::cout << BLUE << "Dog Copy Constructor called" << RESET << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << BLUE << "Dog Destructor called" << RESET << std::endl;
    delete this->brain;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << BLUE << "Dog Assignment Operator called" << RESET << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
        this->brain = new Brain(*rhs.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << BLUE << "Dog Sound" << RESET << std::endl;
}

Brain* Dog::GetBrain() const
{
    return brain;
}
