//
// Created by Anderson Porto on 10/2/22.
//

#ifndef EX02_ANIMAL_HPP
#define EX02_ANIMAL_HPP

#include <string>
#include <iostream>

#define RED "\033[1;31m"
#define RESET "\033[0m"

class Animal
{
public:

	Animal();

	Animal(std::string type);

	Animal(Animal const &animal);

	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const = 0;

	virtual const std::string &GetType() const;

protected:

	std::string type;
};

#endif // EX02_ANIMAL_HPP
