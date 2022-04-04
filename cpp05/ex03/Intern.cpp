#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor was called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor was called" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << "Intern copy constructor was called" << std::endl;
}

Intern& Intern::operator=(const Intern& intern)
{
	std::cout << "Intern assignation operator was called" << std::endl;
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
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		case 3:
			throw Intern::UnknownTypeException();
	}
	return NULL;
}
