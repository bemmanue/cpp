#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form():
	name("Unknown"),
	sign(false),
	grade_to_sign(100),
	grade_to_execute(100)
{
	std::cout << "Form default constructor was called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor was called" << std::endl;
}

Form::Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_execute):
	name(name),
	sign(false),
	grade_to_sign(grade_to_sign),
	grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
	std::cout << WHITE << "Form copy constructor was called" << std::endl;
}

Form::Form(const Form& form):
	name(form.name),
	sign(form.sign),
	grade_to_sign(form.grade_to_sign),
	grade_to_execute(form.grade_to_execute)
{
	std::cout << WHITE << "Form copy constructor was called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

const char* Form::AlreadySignedException::what() const throw()
{
	return ("The form is already signed");
}


const char* Form::UnsignedFormException::what() const throw()
{
	return ("The form is unsigned yet");
}

std::string	Form::getName() const
{
	return name;
}

bool	Form::getSign() const
{
	return sign;
}

unsigned int	Form::getGradeToSign() const
{
	return grade_to_sign;
}

unsigned int	Form::getGradeToExecute() const
{
	return grade_to_execute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (sign)
		throw Form::AlreadySignedException();
	if (bureaucrat.getGrade() <= grade_to_sign)
		sign = true;
	else
		throw Form::GradeTooLowException();
}

Form&	Form::operator=(const Form &form)
{
	std::cout << WHITE << "Form assignation operator was called" << std::endl;
	return *this;
}

std::ostream& operator<< (std::ostream& stream, const Form& form)
{
	return stream	<< form.getName()
					<< (form.getSign() ? " is signed." : " is not signed.")
					<< " Grade to sign: " << form.getGradeToSign()
					<< ". Grade to execute: " << form.getGradeToExecute();
}

void	Form::execute(const Bureaucrat& executor) const
{
	if (this->getSign())
	{
		if (executor.getGrade() <= grade_to_execute)
			this->action();
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::UnsignedFormException();
}
