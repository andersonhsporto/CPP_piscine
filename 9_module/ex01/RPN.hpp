//
// Created by anderson on 14/03/23.
//

#ifndef EX01__RPN_HPP_
#define EX01__RPN_HPP_

#include <iostream>
#include <stack>

class RPN {
 public:
  RPN();
  ~RPN();
  RPN &operator=(RPN const &rhs);
  RPN(RPN const &src);

  void evaluate(const char *str);

 private:
  std::stack<std::string> _stack;
  void _push(std::string str);
  void _validation(std::string str);

};

#endif //EX01__RPN_HPP_
