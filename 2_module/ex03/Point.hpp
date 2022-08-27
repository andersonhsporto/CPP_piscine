//
// Created by Anderson Porto on 8/27/22.
//

#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP


#include "Fixed.hpp"

class Point
{

public:
    Point();

    Point(float x, float y);

    Point(const Point &point);

    Point& operator=(const Point& point);

    ~Point();

    const Fixed& GetX() const;

    const Fixed& GetY() const;

    Fixed absoluteSubtraction();

private:
    const Fixed x;
    const Fixed y;
};


#endif //EX03_POINT_HPP


