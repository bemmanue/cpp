#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("President", 28, 5),
	target("Unknown")
{
	std::cout << WHITE << "PresidentialPardonForm default constructor was called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << WHITE << "PresidentialPardonForm destructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("President", 28, 5),
	target(target)
{
	std::cout << WHITE << "PresidentialPardonForm default constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& source)
{
	std::cout << WHITE << "PresidentialPardonForm copy constructor was called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& source)
{
	std::cout << WHITE << "PresidentialPardonForm assignation operator was called" << std::endl;
	return *this;
}

void	PresidentialPardonForm::action() const
{
	std::cout << YELLOW << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
