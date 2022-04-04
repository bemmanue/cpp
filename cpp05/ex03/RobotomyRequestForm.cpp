#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
		target("Unknown")
{
	std::cout << "RobotomyRequestForm default constructor was called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string& target):
		target(target)
{
	std::cout << "RobotomyRequestForm default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& source)
{
	std::cout << "RobotomyRequestForm copy constructor was called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
	std::cout << "RobotomyRequestForm assignation operator was called" << std::endl;
	return *this;
}

void	RobotomyRequestForm::action() const
{
	std::cout << "Drrr... drrr... drrr..." << std::endl;
	if (rand() % 2 == 0)
		std::cout << target << " has been robotomized succesfully" << std::endl;
	else
		std::cout << target << " failed to be robotomized " << std::endl;
}
