#include "whatever.hpp"

int main() {
  swapTest();
  minTest();
  maxTest();
  return 0;
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

void minTest() {
  int four = 4;
  int two = 2;
  float fourf = 4.0f;
  float twof = 2.0f;

  std::cout << GREEN << "Min test:" << RESET << std::endl;
  std::cout << GREEN << "Min: four = " << four << " two = " << two << " min = " << min(four, two)
            << RESET << std::endl;
  std::cout << CYAN << "Min: fourf = " << fourf << " twof = " << twof << " min = "
            << min(fourf, twof)
            << RESET << std::endl;
}

void maxTest() {
  int four = 4;
  int two = 2;
  float fourf = 4.0f;
  float twof = 2.0f;

  std::cout << GREEN << "Max test:" << RESET << std::endl;
  std::cout << GREEN << "Max: four = " << four << " two = " << two << " max = " << max(four, two)
            << RESET << std::endl;
  std::cout << CYAN << "Max: fourf = " << fourf << " twof = " << twof << " max = "
            << max(fourf, twof)
            << RESET << std::endl;
}