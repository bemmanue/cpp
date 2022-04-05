#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << WHITE << "Bureaucrat destructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(): name("Unknown"), grade(0)
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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout	<< GREEN << name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout	<< RED << name << " couldn't sign " << form.getName()
					<< " because " << error.what() << std::endl;
	}
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

std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bureaucrat)
{
	return stream	<< "Bureaucrat: " << bureaucrat.getName()
					<< ", bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
}

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout	<< GREEN << "Bureaucrat " << name
					<< " executed " << form.getName() << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout	<< RED << name << " couldn't execute " << form.getName()
					<< " because " << error.what() << std::endl;
	}
}
