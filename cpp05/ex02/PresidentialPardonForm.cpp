#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	target("Unknown")
{
	std::cout << "PresidentialPardonForm default constructor was called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	target(target)
{
	std::cout << "PresidentialPardonForm default constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& source)
{
	std::cout << "PresidentialPardonForm copy constructor was called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& source)
{
	std::cout << "PresidentialPardonForm assignation operator was called" << std::endl;
	return *this;
}

void	PresidentialPardonForm::action() const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
