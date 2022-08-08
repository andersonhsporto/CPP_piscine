#ifndef PHONEBOOKSERVICE_HPP
#define PHONEBOOKSERVICE_HPP

#include "PhoneBookApplication.hpp"

class PhoneController
{

private:
	PhoneBook	_phoneBook;

public:
	PhoneController(void);
	~PhoneController(void);

	void		phoneBookService(void);
};

#endif //EX01_PHONEBOOKSERVICE_HPP
