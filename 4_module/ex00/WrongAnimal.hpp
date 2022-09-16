//
// Created by Anderson Porto on 9/16/22.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <string>
#include <iostream>

#define BLUE "\033[1;34m From WrongAnimal class: "
#define RESET "\33[0m"
#define WRONG_ANIMAL_DEFAULT "\033[1;34m From WrongAnimal class: Default WrongAnimal\33[0m"

class WrongAnimal
{
public:
    WrongAnimal();

    WrongAnimal(const std::string& type);

    virtual ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal& wrongAnimal);

    const std::string& GetType() const;

    void makeSound() const;

protected:
    std::string type;
};

std::ostream& operator<<(std::ostream& outStream, WrongAnimal wrongAnimal);


#endif //EX00_WRONGANIMAL_HPP
