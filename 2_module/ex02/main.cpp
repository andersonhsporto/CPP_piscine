#include "Fixed.hpp"
#include <iostream>

void tests();
void instanceFromFloat();
void operatorGreaterThan();
void operatorLessThan();
void greaterThanOrEqualTo();
void lessThanOrEqualTo();
void notEqualTo();
void math();
void preDecrement();
void postDecrement();
void preIncrement();
void postIncrement();
void minTest();
void maxTest();

int main( void ) {

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    tests();
    return 0;
}

void tests() {
	operatorGreaterThan();
	operatorLessThan();
	greaterThanOrEqualTo();
	lessThanOrEqualTo();
	notEqualTo();
	math();
	preDecrement();
	postDecrement();
	preIncrement();
	postIncrement();
	minTest();
	maxTest();
}

void printERROR() {
	std::cout << "ERROR" << std::endl;
}

void printOK() {
	std::cout << "OK" << std::endl;
}

void operatorGreaterThan()
{
    Fixed* eight = new Fixed( 8 );
	Fixed* nine = new Fixed( 9 );

	std::cout << "\nTest:\t Operator >\t";
	if ( *eight > *nine )
		printERROR();
	else
		printOK();
	delete(eight);
	delete(nine);
}

void operatorLessThan()
{
	Fixed* eight = new Fixed( 8 );
	Fixed* nine = new Fixed( 9 );

	std::cout << "\nTest:\t Operator <\t";
	if ( *nine < *eight )
		printERROR();
	else
		printOK();
	delete(eight);
	delete(nine);
}

void greaterThanOrEqualTo()
{
	Fixed* four = new Fixed( 4 );
	Fixed* two = new Fixed( 2 );
	Fixed* dois = new Fixed( 2 );

	std::cout << "\nTest:\t Operator >=\t";
	if ( *four >= *two && *dois >= *two )
		printOK();
	else
		printERROR();
	delete(four);
	delete(two);
	delete(dois);
}

void lessThanOrEqualTo()
{
	Fixed* four = new Fixed( 4 );
	Fixed* two = new Fixed( 2 );
	Fixed* dois = new Fixed( 2 );

	std::cout << "\nTest:\t Operator <=\t";
	if ( *two <= *four && *dois <= *two )
		printOK();
	else
		printERROR();

	delete(four);
	delete(two);
	delete(dois);
}

void equalTo()
{
	Fixed one( 1 );
	Fixed um( 1 );
	Fixed zero( 0 );
	Fixed ten( 10 );

	std::cout << "\nTest:\t Operator ==\t";
	if ( one == um && zero == zero && ten == ten )
		printOK();
	else
		printERROR();
}

void notEqualTo()
{
	Fixed one( 1 );
	Fixed um( 1 );

	std::cout << "\nTest:\t Operator !=\t";
	if ( one != um )
		printERROR();
	else
		printOK();
}

void math()
{
	Fixed ft( 42 );
	Fixed two( 2 );

	std::cout << "\nTest:\t Simple math\t" << std::endl;
	std::cout << "\t\t42 + 2 == 44 : ";
	ft + two == 44 ? printOK() : printERROR();
	std::cout << "\t\t42 - 2 == 40 : ";
	ft - two == 40 ? printOK() : printERROR();
	std::cout << "\t\t42 * 2 == 84 : ";
	ft * two == 84 ? printOK() : printERROR();
	std::cout << "\t\t42 / 2 == 21 : ";
	ft / two == 21 ? printOK() : printERROR();
}

void preDecrement() {
	Fixed four( 4 );

	std::cout << "\nTest:\t Pre-decrement\t\n" << std::endl;
	std::cout << "\tbefore --:\t" << four << std::endl;
	std::cout << "\tusing  --:\t" << --four << std::endl;
	std::cout << "\tafter  --:\t" << four << std::endl;
}

void postDecrement() {
	Fixed four( 4 );

	std::cout << "\nTest:\t Post-decrement\t\n" << std::endl;
	std::cout << "\tbefore --:\t" << four << std::endl;
	std::cout << "\tusing  --:\t" << four-- << std::endl;
	std::cout << "\tafter  --:\t" << four << std::endl;
}

void preIncrement() {
	Fixed four( 4 );

	std::cout << "\nTest:\t Pre-increment\t\n" << std::endl;
	std::cout << "\tbefore ++:\t" << four << std::endl;
	std::cout << "\tusing  ++:\t" << ++four << std::endl;
	std::cout << "\tafter  ++:\t" << four << std::endl;
}

void postIncrement() {
	Fixed four( 4 );

	std::cout << "\nTest:\t Post-increment\t\n" << std::endl;
	std::cout << "\tbefore ++:\t" << four << std::endl;
	std::cout << "\tusing  ++:\t" << four++ << std::endl;
	std::cout << "\tafter  ++:\t" << four << std::endl;
}

void minTest()
{
	Fixed two( 2 );
	Fixed zero( 0 );

	Fixed const ft( 42 );
	Fixed const ftSquare( ft * ft );

	std::cout << "\nTest:\t Min\t\n" << std::endl;
	std::cout << "\tmin( 2, 0 ) = " << Fixed::min( two, zero ) << std::endl;
	std::cout << "\tmin( 2, 2 ) = " << Fixed::min( two, two ) << std::endl;
	std::cout << "\tmin( 0, 2 ) = " << Fixed::min( zero, two ) << std::endl;

	std::cout << "\nTest:\t Const Min\t\n" << std::endl;
	std::cout << "\tmin( 42, 1764 ) = " << Fixed::min( ft, ftSquare ) << std::endl;
	std::cout << "\tmin( 42, 42 ) = " << Fixed::min( ft, ft ) << std::endl;
	std::cout << "\tmin( 1764, 42 ) = " << Fixed::min( ftSquare, ft ) << std::endl;
}

void maxTest()
{
	Fixed two( 2 );
	Fixed zero( 0 );

	Fixed const ft( 42 );
	Fixed const ftSquare( ft * ft );

	std::cout << "\nTest:\t Max\t\n" << std::endl;
	std::cout << "\tmax( 2, 0 ) = " << Fixed::max( two, zero ) << std::endl;
	std::cout << "\tmax( 2, 2 ) = " << Fixed::max( two, two ) << std::endl;
	std::cout << "\tmax( 0, 2 ) = " << Fixed::max( zero, two ) << std::endl;

	std::cout << "\nTest:\t Const Max\t\n" << std::endl;
	std::cout << "\tmax( 42, 1764 ) = " << Fixed::max( ft, ftSquare ) << std::endl;
	std::cout << "\tmax( 42, 42 ) = " << Fixed::max( ft, ft ) << std::endl;
	std::cout << "\tmax( 1764, 42 ) = " << Fixed::max( ftSquare, ft ) << std::endl;
}
