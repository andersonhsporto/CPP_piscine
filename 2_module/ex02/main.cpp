#include "Fixed.hpp"
#include <iostream>

int main( void ) {

    Fixed         a;
    Fixed   const b( 10 );
    Fixed   const c( 42.42f );
    Fixed   const d( b );
    Fixed   const f( 1234.4321f );

    a = Fixed( 1234.4321f );

    if (b < c)
        std::cout << "OK" << std::endl;
    std::cout << b + c << " " << f << std::endl;
    return 0;
}
