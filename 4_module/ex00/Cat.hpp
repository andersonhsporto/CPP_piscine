//
// Created by Anderson Porto on 9/10/22.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#define ORANGE "\033[0;33m From Cat class: "

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();

    Cat(Cat const& cat);

    ~Cat();

    Cat& operator=(Cat const& cat);

    virtual void makeSound() const;

};

std::ostream& operator<<(std::ostream& outStream, Cat const& cat);

#endif //EX00_CAT_HPP
