//
// Created by Anderson Porto on 10/2/22.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP


#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();

    Dog(std::string& type);

    ~Dog();

    Dog& operator=(Dog const& rhs);

    void makeSound() const;
};


#endif //EX00_DOG_HPP
