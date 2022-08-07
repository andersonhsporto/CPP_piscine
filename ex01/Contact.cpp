#include <iostream> // TODO REMOVER AO FINAL

#include "Contact.hpp"


// Constructors
Contact::Contact(void) {
    std::cout << "Contructor" << std::endl;
    return;
};


// Destructors
Contact::~Contact(void) {
    std::cout << "Destrutor" << std::endl;
    return;
}

const std::string& Contact::GetFirstName() const
{
	return firstName;
}

void Contact::SetFirstName(const std::string& firstName)
{
	Contact::firstName = firstName;
}

const std::string& Contact::GetLastName() const
{
	return lastName;
}

void Contact::SetLastName(const std::string& lastName)
{
	Contact::lastName = lastName;
}

const std::string& Contact::GetNickname() const
{
	return nickname;
}

void Contact::SetNickname(const std::string& nickname)
{
	Contact::nickname = nickname;
}

const std::string& Contact::GetPhoneNumber() const
{
	return phoneNumber;
}

void Contact::SetPhoneNumber(const std::string& phoneNumber)
{
	Contact::phoneNumber = phoneNumber;
}

const std::string& Contact::GetDarkestSecret() const
{
	return darkestSecret;
}

void Contact::SetDarkestSecret(const std::string& darkestSecret)
{
	Contact::darkestSecret = darkestSecret;
};


const std::string &Contact::getFirstName() const {
    return firstName;
}

void Contact::setFirstName(const std::string &firstName) {
    Contact::firstName = firstName;
}

const std::string &Contact::getLastName() const {
    return lastName;
}

void Contact::setLastName(const std::string &lastName) {
    Contact::lastName = lastName;
}

const std::string &Contact::getNickname() const {
    return nickname;
}

void Contact::setNickname(const std::string &nickname) {
    Contact::nickname = nickname;
}

const std::string &Contact::getPhoneNumber() const {
    return phoneNumber;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
    Contact::phoneNumber = phoneNumber;
}

const std::string &Contact::getDarkestSecret() const {
    return darkestSecret;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
    Contact::darkestSecret = darkestSecret;
}
