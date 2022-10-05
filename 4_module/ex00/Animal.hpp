//
// Created by Anderson Porto on 10/2/22.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <string>
#include <iostream>

#define RED "\033[1;31m"
#define RESET "\033[0m"


// Class with virtual destructor and virtual function the virtual
// keyword is used to make the function polymorphic ( Overridable )
class Animal
{
public:
    Animal();

    Animal(std::string type);

    Animal(Animal const& animal);

    virtual ~Animal();

    Animal& operator=(Animal const& rhs);

    virtual void makeSound() const;

    const std::string& GetType() const;


protected:
    std::string type;
};

#endif //EX00_ANIMAL_HPP
