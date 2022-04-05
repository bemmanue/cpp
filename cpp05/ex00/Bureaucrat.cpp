#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << WHITE << "Bureaucrat destructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(): name("Unknown"), grade(100)
{
	std::cout << WHITE << "Bureaucrat default constructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << WHITE << "Bureaucrat constructor was called" << std::endl;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat):
	name(bureaucrat.name),
	grade(bureaucrat.grade)
{
	std::cout << WHITE << "Bureaucrat copy constructor was called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	std::cout << WHITE << "Bureaucrat assignation operator was called" << std::endl;
	grade = bureaucrat.grade;
	return *this;
}

std::string	Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

std::ostream& operator<< (std::ostream &stream, const Bureaucrat& bureaucrat)
{
	return stream << WHITE << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

Bureaucrat& Bureaucrat::operator++()
{
	grade++;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return *this;
}

Bureaucrat& Bureaucrat::operator--()
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return *this;
}
