//
// Created by Anderson Porto on 8/27/22.
//

#include "Point.hpp"

Fixed determinantPart1(Point const a, Point const b, Point const c);

Fixed determinantPart2(Point const a, Point const b, Point const c);

Fixed findDeterminant(Point const a, Point const b, Point const c);

Fixed findTriangleArea(Point const a, const Point b, const Point c);

Fixed areaSum(Point const a, Point const b, Point const c, Point const point);

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed triangleArea = findTriangleArea(a, b, c);
  Fixed sumTriangleArea = areaSum(a, b, c, point);

  return triangleArea == sumTriangleArea;
}

Fixed determinantPart1(Point const a, Point const b, Point const c) {
  Fixed matrix1 = a.GetX() * b.GetY() * 1;
  Fixed matrix2 = a.GetY() * 1 * c.GetX();
  Fixed matrix3 = b.GetX() * c.GetY() * 1;
  return matrix1 + matrix2 + matrix3;
}

Fixed determinantPart2(Point const a, Point const b, Point const c) {
  Fixed matrix1 = c.GetX() * b.GetY() * 1;
  Fixed matrix2 = b.GetX() * a.GetY() * 1;
  Fixed matrix3 = c.GetY() * 1 * a.GetX();
  return matrix1 + matrix2 + matrix3;
}

Fixed findDeterminant(Point const a, Point const b, Point const c) {
  Fixed matrix1 = determinantPart1(a, b, c);
  Fixed matrix2 = determinantPart2(a, b, c);
  Point temp(matrix1.toFloat(), matrix2.toFloat());

  return temp.absoluteSubtraction();
}

Fixed findTriangleArea(const Point a, const Point b, const Point c) {
  Fixed determinant = findDeterminant(a, b, c);
  Fixed area = determinant / 2;

  return area;
}

Fixed areaSum(Point const a, Point const b, Point const c, Point const point) {
  Fixed triangleABP = findTriangleArea(a, b, point);
  Fixed triangleBCP = findTriangleArea(b, c, point);
  Fixed triangleACP = findTriangleArea(a, c, point);

  return triangleABP + triangleBCP + triangleACP;
}
