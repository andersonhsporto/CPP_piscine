#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBookApplication.hpp"

class PhoneBook
{

private:
	Contact				_contacts[8];
	int					_indexOldest;
	int					_contactsNumber;
	static std::string	_truncateString(const std::string& string);
	static void			_printTableHeader(void);
	void				_printContact(Contact const& contact, int index);
	static std::string	_userPrompt(const std::string& contactInfo);
	void				_displayContacts(Contact *contacts, int contactNumber);

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);

};

#endif //EX01_PHONEBOOK_HPP
