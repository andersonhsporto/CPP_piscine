#include "PhoneBookApplication.hpp"

PhoneBook::PhoneBook()
{
	_indexOldest = 0;
	_contactsNumber = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::addContact(void)
{
	Contact				temporaryContact;
	PhoneBookService	phoneBookService;

	temporaryContact.SetFirstName(phoneBookService.userPrompt("First Name"));
	temporaryContact.SetLastName(phoneBookService.userPrompt("Last Name"));
	temporaryContact.SetNickname(phoneBookService.userPrompt("Nickname"));
	temporaryContact.SetPhoneNumber(phoneBookService.userPrompt("Phone Number"));
	temporaryContact.SetPhoneNumber(phoneBookService.userPrompt("Darkest Secret"));
	_contacts[_indexOldest] = temporaryContact;
	if (_indexOldest == 7)
	{
		_indexOldest = 0;
		_contactsNumber = 7;
	}
	else
	{
		_indexOldest++;
		_contactsNumber++;
	}
	return;
}


void PhoneBook::searchContact()
{
	PhoneBookService	phoneBookService;

	phoneBookService.displayContacts(_contacts, _contactsNumber);
	return;
}

