#include "PhoneBookController.hpp"

PhoneController::PhoneController()
{
}

PhoneController::~PhoneController()
{
}

void	PhoneController::phoneBookService()
{
    std::string commandString;
    std::cout << "This is the awesome phonebook !!" <<  std::endl;
    for(;;) {
        std::cout << "you can use one of the following commands: " << CMD << std::endl;
        std::getline(std::cin, commandString);
        if (commandString == "ADD")
            _phoneBook.addContact();
        if (commandString == "SEARCH")
            _phoneBook.searchContact();
        if (commandString == "EXIT")
            break;
    }
}
