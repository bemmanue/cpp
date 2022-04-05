#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat yulya("Yulya", 20);
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		ShrubberyCreationForm Shrubbery("Shrubbery");
		yulya.signForm(Shrubbery);
		yulya.executeForm(Shrubbery);
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		RobotomyRequestForm Robotomy("Robotomy");
		yulya.signForm(Robotomy);
		yulya.executeForm(Robotomy);
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm President("President");
		yulya.signForm(President);
		yulya.executeForm(President);
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	return 0;
}
