//
// Created by Anderson Porto on 8/21/22.
//

#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionalBits(8);

Fixed::Fixed(): rawBits(0)
{
    std::cout << CONSTRUCTOR << std::endl;
}

Fixed::Fixed(const int integer): rawBits(integer << fractionalBits)
{
    std::cout << INT_CONSTRUCTOR << std::endl;
}

Fixed::Fixed(const float float_nbr): rawBits(float_nbr * (float)(1 << fractionalBits))
{
    std::cout << FLOAT_CONSTRUCTOR << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << COPY_CONSTRUCTOR << std::endl;
    this->rawBits = fixed.getRawBits();
}


int Fixed::getRawBits( void ) const
{
    std::cout << GETTER << std::endl;
    return rawBits;
}

void Fixed::setRawBits(int const raw)
{
    Fixed::rawBits = raw;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << ASSIGNMENT << std::endl;
    this->rawBits = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << DESTRUCTOR << std::endl;
}

int Fixed::toInt( void ) const
{
    int integer = rawBits >> fractionalBits;

    return integer;
}

