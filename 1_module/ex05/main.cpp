#include "Harl.hpp"

int main() {
  Harl harl;

  std::cout << "\nTest DEBUG comment:" << std::endl;
  harl.complain("DEBUG");
  std::cout << "\nTest INFO comment:" << std::endl;
  harl.complain("INFO");
  std::cout << "\nTest WARNING comment:" << std::endl;
  harl.complain("WARNING");
  std::cout << "\nTest ERROR comment:" << std::endl;
  harl.complain("ERROR");
  std::cout << "\nTest 'Invalid' comment:" << std::endl;
  harl.complain("Invalid #$#$#$#$");
  return 0;
}