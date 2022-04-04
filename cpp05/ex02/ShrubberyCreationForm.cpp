#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
		target("Unknown")
{
	std::cout << "ShrubberyCreationForm default constructor was called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& target):
		target(target)
{
	std::cout << "ShrubberyCreationForm default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& source)
{
	std::cout << "ShrubberyCreationForm copy constructor was called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
	std::cout << "ShrubberyCreationForm assignation operator was called" << std::endl;
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream fout(target + "_shrubbery");
}
