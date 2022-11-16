//
// Created by Anderson Porto on 8/21/22.
//

#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionalBits(8);

Fixed::Fixed() : rawBits(0) {
  std::cout << CONSTRUCTOR << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << COPY_CONSTRUCTOR << std::endl;
  *this = fixed;
}

int Fixed::getRawBits(void) const {
  std::cout << GETTER << std::endl;
  return rawBits;
}

void Fixed::setRawBits(int const raw) {
  Fixed::rawBits = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << ASSIGNMENT << std::endl;
  this->rawBits = fixed.getRawBits();
  return *this;
}

Fixed::~Fixed() {
  std::cout << DESTRUCTOR << std::endl;
}
