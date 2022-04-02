#include <iostream>
#include <exception>

class GradeTooLowException : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("The grade is too low");
	}
};

class GradeTooHighException : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("The grade is too high");
	}
};

class Bureaucrat
{
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat& operator++();
	Bureaucrat& operator--();
	std::string				getName() const;
	int						getGrade() const;
	GradeTooLowException	low;
	GradeTooHighException	high;
private:
	const std::string		name;
	int						grade;
};

Bureaucrat& Bureaucrat::operator++()
{
	grade++;
	if (grade < 1)
		throw low;
	if (grade > 150)
		throw high;
	return *this;
}

Bureaucrat& Bureaucrat::operator--()
{
	grade--;
	if (grade < 1)
		throw low;
	if (grade > 150)
		throw high;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(): name("Unknown"), grade(0)
{
	std::cout << "Bureaucrat default constructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw low;
	if (grade > 150)
		throw high;
	std::cout << "Bureaucrat constructor was called" << std::endl;
	this->grade = grade;
}

std::string	Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

std::ostream & operator << (std::ostream &stream, const Bureaucrat & bureaucrat)
{
	return stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
}

int main()
{

	try
	{
		Bureaucrat	yulya("Yulya", 150);
		++yulya;
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
//	std::cout << yulya << std::endl;
	return 0;
}
