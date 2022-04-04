#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);

	class UnknownTypeException: public std::exception
	{
	public:
		const char* what() const throw();
	};

	Form*	makeForm(std::string name, std::string target);
};

#endif
