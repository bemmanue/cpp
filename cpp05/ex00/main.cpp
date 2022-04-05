#include "Bureaucrat.hpp"

int main()
{
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat	woof("Woof", 0);
		std::cout << woof << std::endl;
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}

	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat	yulya("Yulya", 150);
		++yulya;
		std::cout << yulya << std::endl;
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat	myau("Myau", 2);
		--myau;
		std::cout << myau << std::endl;
	}
	catch (std::exception & error)
	{
		std::cout << RED << error.what() << std::endl;
	}
	std::cout << WHITE << "-----------------------------------" << std::endl;
	return 0;
}
