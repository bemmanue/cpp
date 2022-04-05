#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("Robotomy", 72, 45),
	target("Unknown")
{
	std::cout << WHITE << "RobotomyRequestForm default constructor was called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << WHITE << "RobotomyRequestForm destructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("Robotomy", 72, 45),
	target(target)
{
	std::cout << WHITE << "RobotomyRequestForm default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& source)
{
	std::cout << WHITE << "RobotomyRequestForm copy constructor was called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
	std::cout << WHITE << "RobotomyRequestForm assignation operator was called" << std::endl;
	return *this;
}

void	RobotomyRequestForm::action() const
{
	std::cout << YELLOW << "Drrr... drrr... drrr..." << std::endl;
	srand(time(nullptr));
	if (rand() % 2 == 0)
		std::cout << YELLOW << target << " has been robotomized succesfully" << std::endl;
	else
		std::cout << YELLOW << target << " failed to be robotomized " << std::endl;
}
