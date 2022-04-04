#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form*	form;

	try
	{
		form = someRandomIntern.makeForm("RobotomyRequest", "Yulya");
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	return 0;
}
