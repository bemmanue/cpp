#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#define RED 	"[38;2;230;80;70m"
#define BLUE 	"[38;2;140;180;200m"
#define WHITE 	"[38;2;190;190;190m"
#define YELLOW 	"[38;2;220;170;60m"
#define VIOLET 	"[38;2;200;120;200m"

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

std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bureaucrat);

#endif
