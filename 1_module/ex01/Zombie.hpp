//
// Created by Anderson Porto on 8/15/22.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

#define END   "\033[0m"
#define RED   "\n\t\033[1m\033[31m"

class Zombie {

 public:
  Zombie(const std::string &_name);

  Zombie(void);

  ~Zombie(void);

  void announce(void);

  const std::string &GetName() const;

  void SetName(const std::string &_name);

 private:
  std::string _name;

};

#endif
