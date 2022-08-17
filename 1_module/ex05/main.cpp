#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Test DEBUG comment:" << std::endl;
    harl.complain("DEBUG");
    std::cout << "Test INFO comment:" << std::endl;
    harl.complain("INFO");
    std::cout << "Test WARNING comment:" << std::endl;
    harl.complain("WARNING");
    std::cout << "Test ERROR comment:" << std::endl;
    harl.complain("ERROR");
    std::cout << "Test 'Invalid' comment:" << std::endl;
    harl.complain("Invalid #$#$#$#$");
    return 0;
}