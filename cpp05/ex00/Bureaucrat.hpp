#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat & bureaucrat);
	Bureaucrat& operator++();
	Bureaucrat& operator--();
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
	std::string			getName() const;
	int					getGrade() const;
private:
	const std::string	name;
	int					grade;
};

std::ostream& operator << (std::ostream& stream, const Bureaucrat& bureaucrat);

#endif
