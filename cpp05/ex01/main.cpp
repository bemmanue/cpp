#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		Form form("Form", 50, 151);
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat YulyaNikolavna("Yulya Nikolavna", 51);
		Form form("Form", 50, 100);
		YulyaNikolavna.signForm(form);
		std::cout << BLUE << form << std::endl;
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat VasilyIvanovich("Vasily Ivanovich", 50);
		Form form("Form", 100, 100);
		VasilyIvanovich.signForm(form);
		std::cout << BLUE << form << std::endl;
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	return 0;
}
