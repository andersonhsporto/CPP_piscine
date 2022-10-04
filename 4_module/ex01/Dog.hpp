//
// Created by Anderson Porto on 10/2/22.
//

#ifndef EX01_DOG_HPP
#define EX01_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();

	Dog(const Dog &dog);

	~Dog();

	Dog &operator=(Dog const &rhs);

	void makeSound() const;
};

#endif // EX01_DOG_HPP
