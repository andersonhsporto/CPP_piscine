//
// Created by Anderson Porto on 8/27/22.
//

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(float x, float y) : x(x), y(y) {
}

Point::Point(const Point &point) {
  *this = point;
}

Point &Point::operator=(const Point &point) {
  if (this != &point) {
    const_cast<Fixed &>(this->x) = point.x;
    const_cast<Fixed &>(this->y) = point.y;
  }
  return *this;
}

Point::~Point() {
}

const Fixed &Point::GetX() const {
  return x;
}

const Fixed &Point::GetY() const {
  return y;
}

Fixed Point::absoluteSubtraction() {
  Fixed temp;

  temp = this->x - this->y;
  if (temp < 0)
    temp = temp * -1;
  return temp;
}
