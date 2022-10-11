#include "iter.hpp"

class Awesome {
public:
  Awesome( void ) : _n( 42 ) { return; }
  int get( void ) const { return this->_n; }
 private:
  int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


int main() {
  int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];
  iter(tab, 5, print );
  iter(tab2, 5, print );

  std::cout << "END OF 42 TEST" << std::endl;
  testIntArrayPlusOne();
  testStringArrayReplaceWord();
  return 0;
}

void testIntArrayPlusOne() {
  std::cout << "\nTeste Somar numero inteiro" << std::endl;
  int tab3[] = {0, 1, 2, 3, 4};

  std::cout << "Before plusOne: ";
  printArray(tab3, 5);
  iter(tab3, 5, plusOne);
  std::cout << "After plusOne: ";
  printArray(tab3, 5);
}

void testStringArrayReplaceWord() {
  std::cout << "\nTeste Substituicao de Palavra" << std::endl;
  std::string tab4[] = {"Olá", "Teste", "Palavra"};

  std::cout << "Before replaceWord: ";
  printArray(tab4, 3);
  iter(tab4, 3, replaceWord);
  std::cout << "After replaceWord: ";
  printArray(tab4, 3);
}
