#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("Shrubbery", 145, 137),
	target("Unknown")
{
	std::cout << WHITE << "ShrubberyCreationForm default constructor was called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << WHITE << "ShrubberyCreationForm destructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("Shrubbery", 145, 137),
	target(target)
{
	std::cout << WHITE << "ShrubberyCreationForm default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& source)
{
	std::cout << WHITE << "ShrubberyCreationForm copy constructor was called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
	std::cout << WHITE << "ShrubberyCreationForm assignation operator was called" << std::endl;
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream fout(target + "_shrubbery");
	fout	<< "     ****" 			<< std::endl
			<< "  ****** **"		<< std::endl
			<< "*  ******** *"		<< std::endl
			<< " **  ********"		<< std::endl
			<< "*************"		<< std::endl
			<< "  *********"		<< std::endl
			<< "     ||"			<< std::endl
			<< "     ||"			<< std::endl
			<< "...!.!!.!.!..";
}
