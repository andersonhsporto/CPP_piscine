//
// Created by anderson on 14/03/23.
//

#include "RPN.hpp"
// atoi
#include <stdlib.h>

RPN::RPN() {

}
RPN::~RPN() {

}
RPN &RPN::operator=(const RPN &rhs) {
  if (this != &rhs) {
    this->_stack = rhs._stack;
  }
  return *this;
}
RPN::RPN(const RPN &src) {
  *this = src;
}

void RPN::evaluate(const char *str) {
  _validation(str);
  _push(str);

  std::stack<int> nums;
  for (std::stack<std::string> dump = _stack; !dump.empty(); dump.pop()) {
    std::string str = dump.top();
    if (isdigit(str[str.length() - 1])) {
      nums.push(std::atoi(str.c_str()));
      continue;
    }
    int a = nums.top();
    nums.pop();
    int b = nums.top();
    nums.pop();
    if (str == "+") {
      nums.push(b + a);
      continue;
    }
    if (str == "*") {
      nums.push(b * a);
      continue;
    }
    if (str == "/") {
      nums.push(b / a);
      continue;
    }
    if (str == "-") {
      nums.push(b - a);
      continue;
    }
  }
  std::cout << nums.top() << std::endl;
}

void RPN::_push(std::string str) {
  for (size_t i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      std::string tmp;
      while (str[i] != ' ' && i < str.length()) {
        tmp += str[i];
        i++;
      }
      _stack.push(tmp);
    }
  }

  // reverse stack
  std::stack<std::string> tmp;
  for (std::stack<std::string> dump = _stack; !dump.empty(); dump.pop()) {
    tmp.push(dump.top());
  }
  _stack = tmp;

}
void RPN::_validation(std::string str) {
  if (str.find_first_not_of("0123456789+-*/ ") != std::string::npos) {
    throw std::invalid_argument("Invalid expression");
  }
}
