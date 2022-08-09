#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{

private:
	Contact				_contacts[8];
	int					_indexOldest;
	int					_contactsNumber;
	static std::string	_truncateString(const std::string& string);
	static void			_printTableHeader();
	static void				_printContact(Contact const& contact, int index);
	static std::string	_userPrompt(const std::string& contactInfo);
	static void				_displayContacts(Contact *contacts, int contactNumber);
	int					_contactPrompt(int index);
	void				_printContactInfo(int contactIndex);

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);

};

#endif
