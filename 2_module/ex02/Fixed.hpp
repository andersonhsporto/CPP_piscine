//
// Created by Anderson Porto on 8/21/22.
//

#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP


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

    Fixed operator+(const Fixed& rhs) const;

    Fixed operator-(const Fixed& rhs) const;

    Fixed operator*(const Fixed& rhs) const;

    Fixed operator/(const Fixed& rhs) const;

    Fixed min(Fixed& number_1, Fixed& number_2) const;

    Fixed min(const Fixed& number_1, const Fixed& number_2) const;

    Fixed max(Fixed& number_1, Fixed& number_2) const;

    Fixed max(const Fixed& number_1, const Fixed& number_2) const;

private:
    int                 rawBits;
    static const int    fractionalBits;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif //EX02_FIXED_HPP
