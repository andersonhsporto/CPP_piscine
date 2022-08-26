#include "Fixed.hpp"
#include <iostream>

int main( void ) {

    Fixed         a;
    Fixed   const b( 4 );
    Fixed   const c( 2 );
    Fixed   const d( 0 );
    Fixed   const f( 1234.4321f );

    a = Fixed( 1234.4321f );

    if (b < c)
        std::cout << "OK" << std::endl;
    std::cout << b - c << " " << f << std::endl;
    std::cout << b * c << " " << f << std::endl;
    std::cout << b / c << " " << f << std::endl;
    return 0;
}
