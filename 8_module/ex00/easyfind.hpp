//
// Created by Anderson Porto on 10/10/22.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>

#define CYAN "\033[1;36m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

class NotFoundException : public std::exception {
 public:
  virtual const char *what() const throw() {
    return "Value not found";
  }
};

template<typename T>
typename T::iterator easyfind(T &container, int value) {
  if (std::find(container.begin(), container.end(), value) != container.end()) {
    return std::find(container.begin(), container.end(), value);
  } else {
    throw NotFoundException();
  }
}

void testVectorContainer();
void testListContainer();
void testDequeContainer();

#endif //EX00_EASYFIND_HPP
