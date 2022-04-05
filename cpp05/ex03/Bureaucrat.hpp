#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

#define RED 	"[38;2;230;80;70m"
#define BLUE 	"[38;2;120;150;200m"
#define WHITE 	"[38;2;190;190;190m"
#define YELLOW 	"[38;2;220;170;60m"
#define VIOLET 	"[38;2;200;120;200m"
#define GREEN 	"[38;2;110;160;40m"

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);
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
	void				signForm(Form& form);
	void				executeForm(Form const& form);
private:
	const std::string	name;
	int					grade;
};

std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bureaucrat);

#endif
