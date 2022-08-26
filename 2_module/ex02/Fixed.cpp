//
// Created by Anderson Porto on 8/21/22.
//

#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionalBits(8);

Fixed::Fixed(): rawBits(0)
{
}

Fixed::Fixed(const int integer): rawBits(integer << fractionalBits)
{
}

Fixed::Fixed(const float float_nbr): rawBits(roundf(float_nbr * (1 << fractionalBits)))
{
}

Fixed::Fixed(const Fixed& fixed)
{
    *this = fixed;
}

int Fixed::getRawBits( void ) const
{
    return rawBits;
}

void Fixed::setRawBits(int const raw)
{
    Fixed::rawBits = raw;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    if (this != &fixed)
    {
        this->rawBits = fixed.rawBits;
    }
    return *this;
}

Fixed::~Fixed()
{
}

float Fixed::toFloat(void) const
{
    float float_nbr = ((float)rawBits / (float)(1 << fractionalBits));

    return float_nbr;
}

int Fixed::toInt( void ) const
{
    int integer = rawBits >> fractionalBits;

    return integer;
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return rawBits == rhs.rawBits;
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return !(rhs == *this);
}

bool Fixed::operator>(const Fixed& rhs) const
{
    return rawBits > rhs.rawBits;
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return rawBits < rhs.rawBits;
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return rawBits >= rhs.rawBits;
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return rawBits <= rhs.rawBits;
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
    Fixed sum;

    sum.setRawBits(getRawBits() + rhs.getRawBits());
    return sum;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    Fixed subtraction;

    subtraction.setRawBits(getRawBits() - rhs.getRawBits());
    return subtraction;
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed)
{
    stream << fixed.toFloat();
    return stream;
}


