//
// Created by Anderson Porto on 9/16/22.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP

#define RED "\033[1;31m"

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();

    Dog(Dog const& dog);

    ~Dog();

    Dog& operator=(Dog const& dog);

    virtual void makesound() const;


};

std::ostream& operator<<(std::ostream& outStream, Dog const& dog);

#endif //EX00_DOG_HPP