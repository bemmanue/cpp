#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	yulya("Yulya", 150);
		++yulya;
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
//	std::cout << yulya << std::endl;
	return 0;
}
