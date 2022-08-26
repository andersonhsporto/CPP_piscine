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
    std::cout << b + c << " " << "sum" << std::endl;
    std::cout << b - c << " " << "sub" << std::endl;
    std::cout << b * c << " " << "mul" << std::endl;
    std::cout << b / c << " " << "div" << std::endl;
    std::cout << f.toFloat() << " " << "div" << std::endl;

    std::cout << d.min(b, c) << "min teste" << std::endl;
    std::cout << d.min(c, b) << "min teste" << std::endl;
    return 0;
}
