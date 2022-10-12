#include "easyfind.hpp"

int main() {
  testVectorContainer();
  testListContainer();
  testDequeContainer();
  return 0;
}

void testVectorContainer() {
  std::vector<int> vector;

  vector.push_back(39);
  vector.push_back(42);

  std::cout << GREEN << "\n---------------Vector container test:" << RESET << std::endl;

  try {
    std::cout << CYAN << "Value found: " << RESET << *easyfind(vector, 42) << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  try {
    std::cout << CYAN << "Value found: " << RESET << *easyfind(vector, 121) << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  std::cout << GREEN << "---------------End of Test\n" << RESET << std::endl;
}

void testListContainer() {
  std::list<int> list;

  list.push_back(41);
  list.push_back(42);

  std::cout << GREEN << "\n---------------List container test:" << RESET << std::endl;

  try {
    std::cout << CYAN << "List container: " << RESET << *easyfind(list, 42) << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  try {
    std::cout << CYAN << "List container: " << RESET << *easyfind(list, 121) << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  std::cout << GREEN << "---------------End of Test\n" << RESET << std::endl;
}

void testDequeContainer() {
  std::deque<int> deque;

  deque.push_back(41);
  deque.push_back(42);

  std::cout << GREEN << "\n---------------Deque container test:" << RESET << std::endl;

  try {
    std::cout << CYAN << "Deque container: " << RESET << *easyfind(deque, 42) << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  try {
    std::cout << CYAN << "Deque container: " << RESET << *easyfind(deque, 121) << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  std::cout << GREEN << "---------------End of Test\n" << RESET << std::endl;
}