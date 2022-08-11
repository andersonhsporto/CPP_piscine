#include "Contact.hpp"

Contact::Contact()
{
};

Contact::~Contact()
{
}

const std::string& Contact::GetFirstName() const
{
    return _firstName;
}

void Contact::SetFirstName(const std::string& firstName)
{
    Contact::_firstName = firstName;
}

const std::string& Contact::GetLastName() const
{
    return _lastName;
}

void Contact::SetLastName(const std::string& lastName)
{
    Contact::_lastName = lastName;
}

const std::string& Contact::GetNickname() const
{
    return _nickname;
}

void Contact::SetNickname(const std::string& nickname)
{
    Contact::_nickname = nickname;
}

const std::string& Contact::GetPhoneNumber() const
{
    return _phoneNumber;
}

void Contact::SetPhoneNumber(const std::string& phoneNumber)
{
    Contact::_phoneNumber = phoneNumber;
}

const std::string& Contact::GetDarkestSecret() const
{
    return _darkestSecret;
}

void Contact::SetDarkestSecret(const std::string& darkestSecret)
{
    Contact::_darkestSecret = darkestSecret;
}
