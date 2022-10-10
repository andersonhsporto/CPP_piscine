//
// Created by Anderson Porto on 10/10/22.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <exception>

template<typename T>
class Array {
 public:
  // Construction with no parameter: Creates an empty array
  Array() : array(0), length(0) {}

  // Construction with a size parameter: Creates an array of the given size
  Array(unsigned int length) : array(new T[length]), length(length) {}

  // Construction by copy and assignment operator. In both cases, modifying either the
  //original or the copy should not affect the other.
  Array(const Array &other) : array(new T[other.length]()), length(other.length) {
    for (unsigned int i = 0; i < length; i++) {
      array[i] = other.array[i];
    }
  }

  ~Array() {
    if (this->array)
      delete[] this->array;
  }

  // Construction by assignment operator. In both cases, modifying either the
  //original or the copy should not affect the other.
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

  // When accessing an element with the [ ] operator, if its index is out of bounds, an
  // std::exception is thrown
  T &operator[](int index) {
    if (static_cast<unsigned int>(index) >= length || index < 0)
      throw IndexOutOfBoundsException();
    return array[index];
  }

  // member function size() that returns the number of elements in the array.
  // This member function takes no parameter and returns an unsigned int.
  unsigned int size() const {
    return this->size;
  }

  // Exception class iherited from std::exception that is thrown when an index is out of bounds.
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
