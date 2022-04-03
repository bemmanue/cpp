#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form():
	name("Unknown"),
	sign(0),
	grade_to_sign(0),
	grade_to_execute(0)
{
}

Form::~Form()
{
}

Form::Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_execute):
	name(name),
	sign(0),
	grade_to_sign(grade_to_sign),
	grade_to_execute(grade_to_execute)
{
}

Form::Form(const Form& form):
	name(form.name),
	sign(form.sign),
	grade_to_sign(form.grade_to_sign),
	grade_to_execute(form.grade_to_execute)
{
}

Form&	Form::operator=(const Form &form)
{
	return *this;
}

std::ostream & operator << (std::ostream stream, const Form & form)
{
	return stream	<< form.getName()
					<< form.getSign()
					<< form.getGradeToSign()
					<< form.getGradeToExecute();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

std::string	Form::getName() const
{
	return name;
}

bool	Form::getSign() const
{
	return sign;
}

const int	Form::getGradeToSign() const
{
	return grade_to_sign;
}

const int	Form::getGradeToExecute() const
{
	return grade_to_execute;
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= grade_to_sign)
		sign = true;
	else
		throw Form::GradeTooLowException();
}
