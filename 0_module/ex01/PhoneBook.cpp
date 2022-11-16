#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() {
  _indexOldest = 0;
  _contactsNumber = 0;
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::AddContact() {
  Contact temporaryContact;

  temporaryContact.SetFirstName(_UserPrompt("First Name"));
  temporaryContact.SetLastName(_UserPrompt("Last Name"));
  temporaryContact.SetNickname(_UserPrompt("Nickname"));
  temporaryContact.SetPhoneNumber(_UserPrompt("Phone Number"));
  temporaryContact.SetDarkestSecret(_UserPrompt("Darkest Secret"));
  std::cout << _indexOldest << std::endl;
  _contacts[_indexOldest] = temporaryContact;
  if (_indexOldest == 7) {
    _indexOldest = 0;
    _contactsNumber = 8;
  } else {
    _indexOldest++;
    if (_contactsNumber < 8)
      _contactsNumber++;
  }
}

void PhoneBook::SearchContact() {
  if (_contactsNumber > 0) {
    _DisplayContacts(_contacts, _contactsNumber);
    int index = _ContactPrompt(_contactsNumber);
    _PrintContactInfo(index - 1);
  } else {
    std::cout << "Phonebook empty" << std::endl;
  }
}

std::string PhoneBook::_TruncateString(const std::string &string) {
  if (string.length() > 10)
    return string.substr(0, 9) + ".";
  else
    return string.substr(0, 9);
}

void PhoneBook::_PrintTableHeader() {
  std::cout << std::setw(10) << "Index" << "|";
  std::cout << std::setw(10) << "First Name" << "|";
  std::cout << std::setw(10) << "Last Name" << "|";
  std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
}

void PhoneBook::_PrintContact(Contact const &contact, int index) {
  std::cout << std::setw(10) << index + 1 << "|";
  std::cout << std::setw(10) << _TruncateString(contact.GetFirstName()) << "|";
  std::cout << std::setw(10) << _TruncateString(contact.GetLastName()) << "|";
  std::cout << std::setw(10) << _TruncateString(contact.GetNickname()) << "|" << std::endl;
}

std::string PhoneBook::_UserPrompt(const std::string &contactInfo) {
  std::string commandString;
  for (;;) {
    std::cout << "Please enter the contact " << contactInfo << ":" << std::endl;
    std::getline(std::cin, commandString);
    if (!commandString.empty())
      break;
  }
  return commandString;
}

int PhoneBook::_ContactPrompt(int index) {
  std::string commandString;
  int number;
  for (;;) {
    std::cout << "Please enter the contact index: " << std::endl;
    std::getline(std::cin, commandString);
    std::istringstream(commandString) >> number;
    if (number > index || number <= 0) {
      std::cout << "Invalid valid index " << std::endl;
      _DisplayContacts(_contacts, _contactsNumber);
      continue;
    }
    if (!commandString.empty())
      break;
  }
  return number;
}

void PhoneBook::_DisplayContacts(Contact *contacts, int contactNumber) {
  _PrintTableHeader();
  for (int i = 0; i < contactNumber; i++)
    _PrintContact(contacts[i], i);
}

void PhoneBook::_PrintContactInfo(int contactIndex) {
  std::cout << "First Name: " << _contacts[contactIndex].GetFirstName() << std::endl;
  std::cout << "Last Name: " << _contacts[contactIndex].GetLastName() << std::endl;
  std::cout << "Nickname: " << _contacts[contactIndex].GetNickname() << std::endl;
  std::cout << "Phone Number: " << _contacts[contactIndex].GetPhoneNumber() << std::endl;
  std::cout << "Darkest Secret: " << _contacts[contactIndex].GetDarkestSecret() << std::endl;
}
