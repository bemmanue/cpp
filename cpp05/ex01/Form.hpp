#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	~Form();
	Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_execute);
	Form(const Form& form);
	Form& operator=(const Form & form);
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	std::string			getName() const;
	bool				getSign() const;
	const int			getGradeToSign() const;
	const int			getGradeToExecute() const;
	void				beSigned(const Bureaucrat& bureaucrat);
private:
	const std::string	name;
	bool				sign;
	const unsigned int	grade_to_sign;
	const unsigned int	grade_to_execute;
};

std::ostream & operator << (std::ostream stream, const Form & form);

#endif
