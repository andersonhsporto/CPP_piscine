#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBookApplication.hpp"

class Contact {

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:
    Contact(void);
    ~Contact(void);

	const std::string& GetFirstName() const;

	void SetFirstName(const std::string& _firstName);

	const std::string& GetLastName() const;

	void SetLastName(const std::string& _lastName);

	const std::string& GetNickname() const;

	void SetNickname(const std::string& _nickname);

	const std::string& GetPhoneNumber() const;

	void SetPhoneNumber(const std::string& _phoneNumber);

	const std::string& GetDarkestSecret() const;

	void SetDarkestSecret(const std::string& _darkestSecret);

};

#endif // CONTACT_HPP