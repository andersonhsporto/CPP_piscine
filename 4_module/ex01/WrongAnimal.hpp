//
// Created by Anderson Porto on 10/4/22.
//

#ifndef EX01_WRONGANIMAL_HPP
#define EX01_WRONGANIMAL_HPP

#include <string>

#define PURPLE "\033[1;35m"
#define RESET "\033[0m"

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();

	WrongAnimal(std::string type);

	WrongAnimal(const WrongAnimal &wrongAnimal);

	WrongAnimal &operator=(const WrongAnimal &wrongAnimal);

	virtual ~WrongAnimal();

	virtual void makeSound() const;

	std::string GetType() const;

protected:
	std::string type;
};

#endif // EX01_WRONGANIMAL_HPP
