//
// Created by Anderson Porto on 10/4/22.
//

#ifndef EX02_CAT_HPP
#define EX02_CAT_HPP

#define ORANGE "\033[33m"

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
  Cat();

  Cat(std::string idea);

  Cat(const Cat &cat);

  ~Cat();

  Cat &operator=(Cat const &rhs);

  void makeSound() const;

  Brain *GetBrain() const;

 private:
  Brain *brain;
};

#endif // EX02_CAT_HPP
