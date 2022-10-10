#include "iter.hpp"

int main() {
  intArrayTest();
  stringArrayTest();
  charArrayTest();
  doubleArrayTest();
  floatArrayTest();
  return 0;
}

void intArrayTest() {
  int integerArray[6] = {3, 1, 3, 1, 3, 1};

  std::cout << "Before: ";
  printArray(integerArray, 6);
  iter(integerArray, 6, &plusOne);
  std::cout << "After: ";
  printArray(integerArray, 6);
}

void stringArrayTest() {
  std::string stringArray[6] = {"Ola", "Mundo", "Ola", "Mundo", "Ola", "Mundo"};

  std::cout << "Before: ";
  printArray(stringArray, 6);
  iter(stringArray, 6, &replaceWord);
  std::cout << "After: ";
  printArray(stringArray, 6);
}

void charArrayTest() {
  char charArray[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

  std::cout << "Before: ";
  printArray(charArray, 6);
  iter(charArray, 6, &plusOne);
  std::cout << "After: ";
  printArray(charArray, 6);
}

void doubleArrayTest() {
  double doubleArray[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

  std::cout << "Before: ";
  printArray(doubleArray, 6);
  iter(doubleArray, 6, &plusOne);
  std::cout << "After: ";
  printArray(doubleArray, 6);
}

void floatArrayTest() {
  float floatArray[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

  std::cout << "Before: ";
  printArray(floatArray, 6);
  iter(floatArray, 6, &plusOne);
  std::cout << "After: ";
  printArray(floatArray, 6);
}
