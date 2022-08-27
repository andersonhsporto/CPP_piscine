#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);
void inside();
void outside();
void tests();

int main( void ) {

    tests();
    return 0;
}

void inside()
{
    Point a( 0,0 );
    Point b( 4,0 );
    Point c( 4,6 );
    Point point( 4,1 );

    if (bsp(a, b, c, point))
        std::cout << "Point is inside of triangle" << std::endl;
    else
        std::cout << "Point is outside of triangle" << std::endl;
}

void outside()
{
    Point a( 0,0 );
    Point b( 4,0 );
    Point c( 4,6 );
    Point point( 42,42 );

    if (bsp(a, b, c, point))
        std::cout << "Point is inside of triangle" << std::endl;
    else
        std::cout << "Point is outside of triangle" << std::endl;
}

void tests()
{
    inside();
    outside();
}
