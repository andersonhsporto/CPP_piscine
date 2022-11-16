//
// Created by Anderson Porto on 10/4/22.
//

#include "Brain.hpp"

Brain::Brain() {
  std::cout << CYAN << "Brain default constructor called" << RESET << std::endl;
  for (int i = 0; i < 100; i++) {
    std::stringstream ss;
    ss << "Idea " << i;
    this->ideas[i] = ss.str();
  }
}

Brain::Brain(std::string ideaName) {
  std::cout << CYAN << "Brain parameterized constructor called" << RESET << std::endl;
  for (int i = 0; i < 100; i++) {
    std::stringstream ss;
    ss << "Idea " << i;
    this->ideas[i] = ss.str() + " " + ideaName;
  }
}

Brain::Brain(const Brain &copy) {
  std::cout << CYAN << "Brain copy constructor called" << RESET << std::endl;
  *this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
  std::cout << CYAN << "Brain assignation operator called" << RESET << std::endl;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = copy.ideas[i];
  return *this;
}

Brain::~Brain() {
  std::cout << CYAN << "Brain destructor called" << RESET << std::endl;
}

const std::string *Brain::GetIdeas() const {
  return ideas;
}

void Brain::printIdeas() const {
  for (int i = 0; i < 100; i++)
    std::cout << ideas[i] << std::endl;
}

