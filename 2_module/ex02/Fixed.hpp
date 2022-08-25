//
// Created by Anderson Porto on 8/21/22.
//

#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP

#define CONSTRUCTOR         "Default constructor called"
#define COPY_CONSTRUCTOR    "Copy constructor called"
#define GETTER              "getRawBits member function called"
#define ASSIGNMENT          "Copy assignment operator called"
#define DESTRUCTOR          "Destructor called"
#define INT_CONSTRUCTOR     "Int constructor called"
#define FLOAT_CONSTRUCTOR   "Float constructor called"

#include <cmath>
#include <iostream>

class Fixed
{
public:
    Fixed();

    Fixed (const int integer);

    Fixed (const float float_nbr);

    Fixed(const Fixed &fixed);

    Fixed& operator=(const Fixed& fixed);

    ~Fixed();

    int getRawBits( void ) const;

    void setRawBits(int const raw);

    float toFloat ( void ) const;

    int toInt( void ) const;

    bool operator==(const Fixed& rhs) const;

    bool operator!=(const Fixed& rhs) const;

    bool operator>(const Fixed& rhs) const;

    bool operator<(const Fixed& rhs) const;

    bool operator>=(const Fixed& rhs) const;

    bool operator<=(const Fixed& rhs) const;

private:
    int                 rawBits;
    static const int    fractionalBits;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif //EX02_FIXED_HPP
