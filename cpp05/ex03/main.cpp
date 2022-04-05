#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat YulyaNikolavna("Yulya Nukolavna", 28);
	Intern	intern;
	Form	*form;
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		form = intern.makeForm("RobotomyRequest", "Yulya");
		YulyaNikolavna.signForm(*form);
		YulyaNikolavna.executeForm(*form);
	}
	catch (std::exception& error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		form = intern.makeForm("Myaushenka", "Yulya");
		YulyaNikolavna.signForm(*form);
		YulyaNikolavna.executeForm(*form);
	}
	catch (std::exception& error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	return 0;
}
