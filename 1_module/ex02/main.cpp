#include <iostream>
#include <string>

int main ()
{
    std::string   brain = "HI THIS IS BRAIN";
    std::string*  stringPTR = &brain;
    std::string&  stringREF = brain;

    std::cout <<  "\nMemory address of the string variable:\t"  << &brain << std::endl;
    std::cout <<  "Memory address held by stringPTR:\t"  <<   stringPTR << std::endl;
    std::cout <<  "Memory address held by stringREF:\t"  <<   &stringREF << std::endl;

    std::cout <<  "The value of the string variable:\t"   <<  brain << std::endl;
    std::cout <<  "The value pointed to by stringPTR:\t"  <<  *stringPTR << std::endl;
    std::cout <<  "The value pointed to by stringREF:\t"  <<  stringREF << std::endl;
    return 0;
}
