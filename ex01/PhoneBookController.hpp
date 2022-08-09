#ifndef PHONEBOOKSERVICE_HPP
#define PHONEBOOKSERVICE_HPP

#include "PhoneBook.hpp"

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
