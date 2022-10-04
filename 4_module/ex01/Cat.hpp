//
// Created by Anderson Porto on 10/4/22.
//

#ifndef EX01_CAT_HPP
#define EX01_CAT_HPP

#define ORANGE "\033[33m"

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();

	Cat(const Cat &cat);

	~Cat();

	Cat &operator=(Cat const &rhs);

	void makeSound() const;
};

#endif // EX01_CAT_HPP
