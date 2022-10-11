//
// Created by Anderson Porto on 10/10/22.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include <iostream>

template<typename T>
void iter(const T *arrayAddress, size_t arrayLength, void (*function)(T const &arrayElement)) {
  for (size_t i = 0; i < arrayLength; i++) {
    function(arrayAddress[i]);
  }
}

template<typename T>
void iter(T *arrayAddress, size_t arrayLength, void (*function)(T &arrayElement)) {
  for (size_t i = 0; i < arrayLength; i++) {
    function(arrayAddress[i]);
  }
}

template<typename T>
void plusOne(T value) {
  value++;
}

template<typename T>
void replaceWord(T value) {
  value = "Hello World!";
}

template<typename T>
void printArray(T *arrayAddress, size_t arrayLength) {
  for (size_t i = 0; i < arrayLength; i++) {
    if (i == 0) {
      std::cout << "{";
    } else if (i == arrayLength - 1) {
      std::cout << arrayAddress[i] << "}" << std::endl;
      break;
    }
    std::cout << arrayAddress[i] << ", ";
  }
}

void testIntArrayPlusOne();

void testStringArrayReplaceWord();

#endif //EX01_ITER_HPP
