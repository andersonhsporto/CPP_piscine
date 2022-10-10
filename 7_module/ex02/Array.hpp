//
// Created by Anderson Porto on 10/10/22.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <exception>

template<typename T>
class Array {
 public:
  Array() : array(0), length(0) {}

  Array(unsigned int length) : array(new T[length]), length(length) {}

  Array(const Array &other) : array(new T[other.length]()), length(other.length) {
    for (unsigned int i = 0; i < length; i++) {
      array[i] = other.array[i];
    }
  }

  ~Array() {
    if (this->array)
      delete[] this->array;
  }

  Array &operator=(const Array &other) {
    if (this->array)
      delete[] this->array;
    this->array = new T[other.size];
    this->size = other.size;
    for (unsigned int i = 0; i < length; i++) {
      this->array[i] = other.array[i];
    }
    return *this;
  }

  T &operator[](int index) {
    if (static_cast<unsigned int>(index) >= length || index < 0)
      throw IndexOutOfBoundsException();
    return array[index];
  }

  unsigned int size() const {
    return this->size;
  }

  class IndexOutOfBoundsException : public std::exception {
   public:
    virtual const char *what() const throw() {
      return "Index out of bounds";
    }
  };

 private:
  T *array;

  unsigned int length;

};

#endif //EX02_ARRAY_HPP
