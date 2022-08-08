#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBookApplication.hpp"

class Contact {

public:
    Contact(void);
    ~Contact(void);

	const std::string& GetFirstName() const;

	void SetFirstName(const std::string& firstName);

	const std::string& GetLastName() const;

	void SetLastName(const std::string& lastName);

	const std::string& GetNickname() const;

	void SetNickname(const std::string& nickname);

	const std::string& GetPhoneNumber() const;

	void SetPhoneNumber(const std::string& phoneNumber);

	const std::string& GetDarkestSecret() const;

	void SetDarkestSecret(const std::string& darkestSecret);

private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif // CONTACT_HPP