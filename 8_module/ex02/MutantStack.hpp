//
// Created by Anderson Porto on 10/11/22.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T> {

 public:
  MutantStack() : std::stack<T>() {}

  MutantStack(MutantStack const &other) : std::stack<T>(other) {}

  virtual ~MutantStack() {}

  MutantStack &operator=(MutantStack const &other) {
    if (this != &other)
      std::stack<T>::operator=(other);
    return *this;
  }

  typedef typename std::deque<T>::iterator iterator;

  iterator begin() { return std::stack<T>::c.begin(); }

  iterator end() { return std::stack<T>::c.end(); }

};

#endif //EX02_MUTANTSTACK_HPP
