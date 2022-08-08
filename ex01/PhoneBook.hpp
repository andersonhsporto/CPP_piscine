#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBookApplication.hpp"

class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_indexOldest;
	int		_contactsNumber;

public:
	std::string input;

	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);

};

#endif //EX01_PHONEBOOK_HPP
