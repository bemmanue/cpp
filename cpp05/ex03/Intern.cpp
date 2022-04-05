#include "Intern.hpp"

Intern::Intern()
{
	std::cout << WHITE << "Intern default constructor was called" << std::endl;
}

Intern::~Intern()
{
	std::cout << WHITE << "Intern destructor was called" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << WHITE << "Intern copy constructor was called" << std::endl;
}

Intern& Intern::operator=(const Intern& intern)
{
	std::cout << WHITE << "Intern assignation operator was called" << std::endl;
	return *this;
}

const char* Intern::UnknownTypeException::what() const throw()
{
	return "Unknown form name";
}

int	defineType(std::string type)
{
	std::string types[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	for (int i = 0; i < 3; i++)
	{
		if (type == types[i])
			return i;
	}
	return 3;
}

Form*	Intern::makeForm(std::string type, std::string target)
{
	switch (defineType(type))
	{
		case 0:
			std::cout << GREEN << "Intern creates PresidentialPardonForm" << std::endl;
			return new PresidentialPardonForm(target);
		case 1:
			std::cout << GREEN << "Intern creates RobotomyRequestForm" << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << GREEN << "Intern creates ShrubberyCreationForm" << std::endl;
			return new ShrubberyCreationForm(target);
		case 3:
			std::cout << RED << "Intern failes to create form because of unknown form name" << std::endl;
			throw Intern::UnknownTypeException();
	}
	return nullptr;
}
