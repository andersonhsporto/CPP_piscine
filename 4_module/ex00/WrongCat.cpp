//
// Created by Anderson Porto on 9/16/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << PURPLE << "default constructor\n" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) : WrongAnimal(wrongCat)
{
    std::cout << PURPLE << "copy constructor" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << PURPLE << "destructor" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
    std::cout << PURPLE << "assigment operator" << RESET << std::endl;
    if (this != &wrongCat)
    {
        this->type = wrongCat.GetType();
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << PURPLE << "makeSound: Wrong Miau" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& outStream, const WrongCat& wrongCat)
{
    outStream << PURPLE << "WrongCat type:\t" << wrongCat.GetType() << RESET << std::endl;
    return outStream;
}