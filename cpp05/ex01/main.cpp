#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form form("Form", 50, 50);
	try
	{
		Bureaucrat	yulya("Yulya", 10);
		yulya.signForm(form);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
//	std::cout << yulya << std::endl;
	return 0;
}
