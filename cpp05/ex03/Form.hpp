#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	~Form();
	Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_execute);
	Form(const Form& form);
	Form& operator=(const Form& form);
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class AlreadySignedException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	class UnsignedFormException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	std::string			getName() const;
	bool				getSign() const;
	unsigned int		getGradeToSign() const;
	unsigned int		getGradeToExecute() const;
	virtual void		beSigned(const Bureaucrat& bureaucrat);
	virtual void		action() const = 0;
	virtual void		execute(Bureaucrat const& executor) const;
private:
	const std::string	name;
	bool				sign;
	const unsigned int	grade_to_sign;
	const unsigned int	grade_to_execute;
};

std::ostream& operator << (std::ostream& stream, const Form& form);

#endif
