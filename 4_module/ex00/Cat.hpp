//
// Created by Anderson Porto on 10/4/22.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#define ORANGE "\033[33m"

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();

  Cat(const Cat &cat);

  ~Cat();

  Cat &operator=(Cat const &rhs);

  void makeSound() const;
};

#endif //EX00_CAT_HPP
