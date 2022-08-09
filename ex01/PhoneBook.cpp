#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_indexOldest = 0;
	_contactsNumber = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
	Contact				temporaryContact;

	if (_indexOldest == 8)
	{
		_indexOldest = 1;
		_contactsNumber = 8;
	}
	else
	{
		_indexOldest++;
		if (_contactsNumber < 8)
			_contactsNumber++;
	}
	temporaryContact.SetFirstName(_userPrompt("First Name"));
	temporaryContact.SetLastName(_userPrompt("Last Name"));
	temporaryContact.SetNickname(_userPrompt("Nickname"));
	temporaryContact.SetPhoneNumber(_userPrompt("Phone Number"));
	temporaryContact.SetDarkestSecret(_userPrompt("Darkest Secret"));
	_contacts[_indexOldest] = temporaryContact;
}


void PhoneBook::searchContact()
{
	if (_contactsNumber > 0)
	{
		_displayContacts(_contacts, _contactsNumber);
		int index = _contactPrompt(_contactsNumber);
		_printContactInfo(index);
	}
	else
	{
		std::cout << "Phonebook empty" << std::endl;
	}
}

std::string PhoneBook::_truncateString(const std::string& string)
{
	if (string.length() > 10)
		return string.substr(0, 9) + ".";
	else
		return string.substr(0, 9);
}

void	PhoneBook::_printTableHeader()
{
	std::cout << std::setw(11) << "Index" << "|";
	std::cout << std::setw(11) << "First Name" << "|";
	std::cout << std::setw(11) << "Last Name" << "|";
	std::cout << std::setw(11) << "Nickname" << "|" << std::endl;
}

void	PhoneBook::_printContact(Contact const& contact, int index)
{
	std::cout << std::setw(11) << index << "|";
	std::cout << std::setw(11) << _truncateString(contact.GetFirstName()) << "|";
	std::cout << std::setw(11) << _truncateString(contact.GetLastName()) << "|";
	std::cout << std::setw(11) << _truncateString(contact.GetNickname()) << "|" << std::endl;
}

std::string	PhoneBook::_userPrompt(const std::string& contactInfo)
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

int	PhoneBook::_contactPrompt(int index)
{
	std::string	commandString;
	int			number;
	for(;;) {
		std::cout << "Please enter the contact index: " << std::endl;
		std::getline(std::cin, commandString);
		std::istringstream(commandString) >> number;
		if (number > index || number < 1){
			std::cout << "Invalid valid index " << std::endl;
			_displayContacts(_contacts, _contactsNumber);
			continue;
		}
		if (!commandString.empty())
			break;
	}
	return number;
}

void	PhoneBook::_displayContacts(Contact *contacts, int contactNumber)
{
	_printTableHeader();
	for (int i = 1; i < contactNumber + 1; i++)
		_printContact(contacts[i], i);
}

void	PhoneBook::_printContactInfo(int contactIndex)
{
	std::cout << "First Name: " << _contacts[contactIndex].GetFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[contactIndex].GetLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[contactIndex].GetNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[contactIndex].GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[contactIndex].GetDarkestSecret() << std::endl;
}
