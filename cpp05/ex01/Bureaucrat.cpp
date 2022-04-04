#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat constructor was called" << std::endl;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat):
		name(bureaucrat.name),
		grade(bureaucrat.grade)
{
	std::cout << "Bureaucrat copy constructor was called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat assignation operator was called" << std::endl;
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
		std::cout	<< name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout	<< name << " couldn't sign " << form.getName()
					<< " because " << error.what();
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

std::ostream& operator << (std::ostream& stream, const Bureaucrat& bureaucrat)
{
	return stream	<< "Bureaucrat: " << bureaucrat.getName()
					 << ", bureaucrat grade: " << bureaucrat.getGrade();
}

