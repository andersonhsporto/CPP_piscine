//
// Created by Anderson Porto on 10/4/22.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

#define PINK "\033[1;35m"

#include <iostream>
#include "WrongAnimal.hpp"

#define YELLOW "\033[1;33m"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(std::string& type);
    WrongCat(const WrongCat &wrongCat);
    WrongCat &operator=(const WrongCat &wrongCat);
    ~WrongCat();

    void makeSound() const;
};

#endif //EX00_WRONGCAT_HPP
