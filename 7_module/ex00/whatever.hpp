//
// Created by Anderson Porto on 10/9/22.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

#include <iostream>

#define GREEN "\033[1;32m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

template<typename T>
void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template<typename T>
T min(T a, T b) {
  return (a < b) ? a : b;
}

template<typename T>
T max(T a, T b) {
  return (a > b) ? a : b;
}

void swapTest();
void minTest();
void maxTest();

#endif //EX00_WHATEVER_HPP
