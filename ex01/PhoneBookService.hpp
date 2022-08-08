#ifndef PHONEBOOKSERVICE_HPP
#define PHONEBOOKSERVICE_HPP

#include "PhoneBookApplication.hpp"

class PhoneBookService
{

private:
	PhoneBook	_phoneBook;
	std::string	_truncateString(std::string string);
	void		_printTableHeader(void);
	void		_printContact(Contact const& contact, int index);

public:
	PhoneBookService(void);
	~PhoneBookService(void);

	void		phoneBookService(void);
	std::string	userPrompt(std::string contactInfo);
	void		displayContacts(Contact *contacts, int contactNumber);
};

#endif //EX01_PHONEBOOKSERVICE_HPP
