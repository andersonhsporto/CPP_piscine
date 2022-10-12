#include "whatever.hpp"

class Awesome
{
 public:
  Awesome(void) : _n(0) {}
  Awesome( int n ) : _n( n ) {}
  Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
  bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
  bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
  bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
  bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
  bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
  bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
  int get_n() const { return _n; }
 private:
  int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }
int main(void)
{
  Awesome a(2), b(4);
  swap(a, b);
  std::cout << a << " " << b << std::endl;
  std::cout << max(a, b) << std::endl;
  std::cout << min(a, b) << std::endl;

  std::cout << "END OF 42 TEST CASE" << std::endl;
  swapTest();
}

void swapTest() {
  int four = 4;
  int two = 2;
  std::string quatro = "4";
  std::string dois = "2";

  std::cout << GREEN << "Swap test:" << RESET << std::endl;
  std::cout << GREEN << "Before swap: four = " << four << " two = " << two << RESET << std::endl;
  std::cout << CYAN << "Before swap: quatro = " << quatro << " dois = " << dois << RESET
            << std::endl;
  swap(four, two);
  swap(quatro, dois);
  std::cout << GREEN << "After swap: four = " << four << " two = " << two << RESET << std::endl;
  std::cout << CYAN << "After swap: quatro = " << quatro << " dois = " << dois << RESET
            << std::endl;
}