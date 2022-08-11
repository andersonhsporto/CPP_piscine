#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{

private:
    Contact				_contacts[8];
    int					_indexOldest;
    int					_contactsNumber;
    static std::string	_TruncateString(const std::string& string);
    static void			_PrintTableHeader();
    static void			_PrintContact(Contact const& contact, int index);
    static std::string	_UserPrompt(const std::string& contactInfo);
    static void			_DisplayContacts(Contact *contacts, int contactNumber);
    int					_ContactPrompt(int index);
    void				_PrintContactInfo(int contactIndex);

public:
    PhoneBook(void);
    ~PhoneBook(void);

    void	AddContact(void);
    void	SearchContact(void);

};

#endif
