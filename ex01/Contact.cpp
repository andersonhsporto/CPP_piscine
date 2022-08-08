#include "PhoneBookApplication.hpp"

// Constructors
Contact::Contact(void) {
    return;
};


// Destructors
Contact::~Contact(void) {
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
}
