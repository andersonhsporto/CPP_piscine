#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBookApplication.hpp"

class PhoneBook
{
private:
	Contact		_contacts[8];
	int			_indexOldest;
	int			_contactsNumber;
	std::string	_truncateString(std::string string);
	void		_printTableHeader(void);
	void		_printContact(Contact const& contact, int index);
	std::string	_userPrompt(std::string contactInfo);
	void		_displayContacts(Contact *contacts, int contactNumber);

public:
	std::string input;

	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);

};

#endif //EX01_PHONEBOOK_HPP
