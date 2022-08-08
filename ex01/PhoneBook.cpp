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

	temporaryContact.SetFirstName(_userPrompt("First Name"));
	temporaryContact.SetLastName(_userPrompt("Last Name"));
	temporaryContact.SetNickname(_userPrompt("Nickname"));
	temporaryContact.SetPhoneNumber(_userPrompt("Phone Number"));
	temporaryContact.SetPhoneNumber(_userPrompt("Darkest Secret"));
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
	_displayContacts(_contacts, _contactsNumber);
	return;
}



std::string PhoneBook::_truncateString(std::string string)
{
	if (string.length() > 10)
		return string.substr(0, 9) + ".";
	else
		return string.substr(0, 9);
}

void	PhoneBook::_printTableHeader(void)
{
	std::cout << std::setw(11) << "Index" << "|";
	std::cout << std::setw(11) << "First Name" << "|";
	std::cout << std::setw(11) << "Last Name" << "|";
	std::cout << std::setw(11) << "Nickname" << "|" << std::endl;
	return;
}

void	PhoneBook::_printContact(Contact const& contact, int index)
{
	std::cout << std::setw(11) << index << "|";
	std::cout << std::setw(11) << _truncateString(contact.GetFirstName()) << "|";
	std::cout << std::setw(11) << _truncateString(contact.GetLastName()) << "|";
	std::cout << std::setw(11) << _truncateString(contact.GetNickname()) << "|" << std::endl;
	return;
}


std::string	PhoneBook::_userPrompt(std::string contactInfo)
{
	std::string commandString;
	for(;;) {
		std::cout << "Please enter the contact " << contactInfo << ":" << std::endl;
		std::getline(std::cin, commandString);
		if (!commandString.empty())
			break;
	}
	return commandString;
}

void	PhoneBook::_displayContacts(Contact *contacts, int contactNumber)
{
	_printTableHeader();
	for (int i = 0; i < contactNumber; i++) {
		_printContact(contacts[i], i);
	}
	return;
}

