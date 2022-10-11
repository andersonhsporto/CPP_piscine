#include "Span.hpp"

void testRange();

int main() {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  testRange();
  return 0;
}

void testRange() {
  Span sp = Span(5);
  std::list<int> list;

  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  list.push_back(4);
  list.push_back(5);

  sp.addRange(list.begin(), list.end());

  std::cout << "\nTest range: " << std::endl;
  std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
  std::cout << "Longest span: " << sp.longestSpan() << std::endl;
  std::cout << "Elements: ";
  sp.print();
  std::cout << "End test range" << std::endl;
}
