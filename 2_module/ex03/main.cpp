#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {

    Point a( 0,0 );
    Point b( 4,0 );
    Point c( 4,6 );
    Point d( 2,1 );

    if (bsp(a, b, c, d))
        std::cout << "TESTE\n";
    return 0;
}
