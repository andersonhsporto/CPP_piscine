//
// Created by Anderson Porto on 10/4/22.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <string>

#define PURPLE "\033[1;35m"
#define RESET "\033[0m"

#include <iostream>

// Class without virtual destructor and virtual function
class WrongAnimal {
 public:
  WrongAnimal();

  WrongAnimal(std::string type);

  WrongAnimal(const WrongAnimal &wrongAnimal);

  WrongAnimal &operator=(const WrongAnimal &wrongAnimal);

  ~WrongAnimal();

  void makeSound() const;

  std::string GetType() const;

 protected:
  std::string type;
};

#endif //EX00_WRONGANIMAL_HPP
