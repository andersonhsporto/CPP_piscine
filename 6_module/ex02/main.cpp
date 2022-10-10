#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);

void identify(Base *p);

void identify(Base &p);

int main() {
  Base *base = generate();

  identify(base);
  identify(*base);
  delete base;
  return 0;

}

Base *generate(void) {
  srand(time(0));
  int random = rand() % 3;

  switch (random) {
    case 0:
      std::cout << "Type A generated" << std::endl;
      return new A;
    case 1:
      std::cout << "Type B generated" << std::endl;
      return new B;
    default:
      std::cout << "Type C generated" << std::endl;
      return new C;
  }
}

void identify(Base *p) {

  A *a = dynamic_cast<A *>(p);
  B *b = dynamic_cast<B *>(p);
  C *c = dynamic_cast<C *>(p);

  if (a) {
    std::cout << "Identify type by *: A" << std::endl;
  } else if (b) {
    std::cout << "Identify type by *: B" << std::endl;
  } else if (c) {
    std::cout << "Identify type by *: C" << std::endl;
  } else {
    std::cout << "Identify type by *: is unknown" << std::endl;
  }
}

void identify(Base &p) {
  int type = 0;

  try {
    A &a = dynamic_cast<A &>(p);
    static_cast<void>(a);
    type = 1;
  } catch (std::exception &e) {}
  try {
    B &b = dynamic_cast<B &>(p);
    static_cast<void>(b);
    type = 2;
  } catch (std::exception &e) {}
  try {
    C &c = dynamic_cast<C &>(p);
    static_cast<void>(c);
    type = 3;
  } catch (std::exception &e) {}

  switch (type) {
    case 1:std::cout << "Identify type by &: A" << std::endl;
      break;
    case 2:std::cout << "Identify type by &: B" << std::endl;
      break;
    case 3:std::cout << "Identify type by &: C" << std::endl;
      break;
    default:std::cout << "Identify type by &: unknown" << std::endl;
  }
}