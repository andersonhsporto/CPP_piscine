//
// Created by Anderson Porto on 9/16/22.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP


#include "WrongAnimal.hpp"

#define PURPLE "\033[1;35m from WrongCat class: "

class WrongCat : public WrongAnimal
{
public:
    WrongCat();

    WrongCat(WrongCat const& wrongCat);

    ~WrongCat();

    WrongCat& operator=(WrongCat const& wrongCat);

    virtual void makeSound() const;
};

std::ostream& operator<<(std::ostream& outStream, WrongCat const& wrongCat);

#endif //EX00_WRONGCAT_HPP
