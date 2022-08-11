#ifndef PHONEBOOKSERVICE_HPP
#define PHONEBOOKSERVICE_HPP

#include "PhoneBook.hpp"

#define CMD "ADD, SEARCH and EXIT"

class PhoneController
{

private:
    PhoneBook	_phoneBook;

public:
    PhoneController();
    ~PhoneController();

    void		phoneBookService();
};

#endif
