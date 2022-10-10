#include "Array.hpp"

int main() {
  testEmptyArray();
  testArrayWithSize();
  testNegativeIndex();
  testIndexSizeOfArray();
  testAccesibleReading();
  testAccesibleWriting();
  testCopy();
  testConstWriting();
  return 0;
}

void testEmptyArray() {
  Array<int> emptyArray;

  std::cout << "Testing empty array" << std::endl;
  std::cout << "Empty array size: " << emptyArray.size() << std::endl;
}

void testArrayWithSize() {
  Array<int> arrayWithSize(5);
  arrayWithSize[0] = 1;
  arrayWithSize[1] = 2;
  arrayWithSize[2] = 3;
  arrayWithSize[3] = 4;
  arrayWithSize[4] = 5;

  std::cout << "Testing array with size" << std::endl;
  std::cout << "Array with size size: " << arrayWithSize.size() << std::endl;
  arrayWithSize.print();
  std::cout << "End of Test\n" << std::endl;
}

void testNegativeIndex() {
  Array<int> arrayWithSize(5);
  arrayWithSize[0] = 1;
  arrayWithSize[1] = 2;
  arrayWithSize[2] = 3;
  arrayWithSize[3] = 4;
  arrayWithSize[4] = 5;

  std::cout << "Testing negative index" << std::endl;
  try {
    arrayWithSize[-1] = 0;
  } catch (std::exception &e) {
    std::cout << "Exception message: " << e.what() << std::endl;
  }
  std::cout << "End of Test\n" << std::endl;
}

void testIndexSizeOfArray() {
  Array<int> arrayWithSize(2);
  arrayWithSize[0] = 1;
  arrayWithSize[1] = 2;

  std::cout << "Testing index size of array" << std::endl;
  try {
    arrayWithSize[arrayWithSize.size()] = 0;
  } catch (std::exception &e) {
    std::cout << "Exception message: " << e.what() << std::endl;
  }
  std::cout << "End of Test\n" << std::endl;
}

void testAccesibleReading() {
  Array<int> arrayWithSize(2);
  arrayWithSize[0] = 4;
  arrayWithSize[1] = 2;

  std::cout << "Testing accessible reading" << std::endl;
  std::cout << "Array with size size: " << arrayWithSize.size() << std::endl;
  std::cout << "Array with size[0]: " << arrayWithSize[0] << std::endl;
  std::cout << "Array with size[1]: " << arrayWithSize[1] << std::endl;
  std::cout << "End of Test\n" << std::endl;
}

void testAccesibleWriting() {
  Array<int> arrayWithSize(2);
  arrayWithSize[0] = 4;
  arrayWithSize[1] = 2;

  std::cout << "Testing accessible writing" << std::endl;
  std::cout << "Array before writing" << std::endl;
  arrayWithSize.print();
  std::cout << "Array after writing" << std::endl;
  arrayWithSize[0] = 1;
  arrayWithSize[1] = 2;
  arrayWithSize.print();
  std::cout << "End of Test\n" << std::endl;
}

void testCopy() {
  Array<int> arrayWithSize(2);
  arrayWithSize[0] = 4;
  arrayWithSize[1] = 2;

  Array<int> copyArray(arrayWithSize);

  std::cout << "Testing copy" << std::endl;
  std::cout << "Array before copy" << std::endl;
  arrayWithSize.print();
  std::cout << "Copy array" << std::endl;
  copyArray.print();
  copyArray[0] = 1;
  copyArray[1] = 122;
  std::cout << " Modified copy array: " << std::endl;
  copyArray.print();
  std::cout << "Original array: " << std::endl;
  arrayWithSize.print();
  std::cout << "End of Test\n" << std::endl;
}

void testConstWriting() {
  int *array = new int[2];
  array[0] = 4;
  array[1] = 2;
  const Array<int> arrayWithSize(array, 2);
  delete[] array;
  std::cout << "Testing const writing" << std::endl;
  std::cout << "arrayWithSize[0]: " << arrayWithSize[0] << std::endl;
  std::cout << "arrayWithSize[1]: " << arrayWithSize[1] << std::endl;
//  arrayWithSize[0] = 1;
  std::cout << "End of Test\n" << std::endl;
}
