//
// Created by Anderson Porto on 9/10/22.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#define CYAN "\033[0;36m"
#define RESET "\33[0m"


#include <string>
#include <iostream>

class Animal
{
    Animal();
    ~Animal();
    Animal(Animal const& animal);
    Animal& operator=(const Animal& animal);

public:
    const std::string& GetType() const;

protected:
    std::string type;
};

std::ostream& operator<<(std::ostream &outStream, Animal const &animal);

#endif //EX00_ANIMAL_HPP