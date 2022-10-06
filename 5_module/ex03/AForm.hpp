//
// Created by Anderson Porto on 10/5/22.
//

#ifndef EX03_AFORM_HPP
#define EX03_AFORM_HPP

#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
	AForm();

	AForm(const std::string &name, int gradeToSign, int gradeToExecute);

	AForm(const AForm &form);

	AForm &operator=(const AForm &form);

	virtual ~AForm();

	const std::string &getName() const;

	bool isSigned1() const;

	int getGradeToSign() const;

	int getGradeToExecute() const;

	void setIsSigned(bool is_signed);

	void setGradeToSign(int grade_to_sign);

	void setGradeToExecute(int grade_to_execute);

	void beSigned(const Bureaucrat &bureaucrat);

	virtual void execute(Bureaucrat const &executor) const = 0;

protected:
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "AForm exception: Grade too high";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "AForm exception: Grade too low";
		}
	};

	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "AForm exception: Form not signed";
		}
	};

private:
	const std::string name;
	bool isSigned;
	int gradeToSign;
	int gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif // EX03_AFORM_HPP
