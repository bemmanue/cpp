#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor was called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor was called" << std::endl;
}

Cat::Cat(Cat const & cat)
{
	std::cout << "Cat copy constructor was called" << std::endl;
	this->type = cat.type;
}

Cat & Cat::operator = (Cat const & cat)
{
	std::cout << "Cat assignation operator was called" << std::endl;
	this->type = cat.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << type << " says myau myau..." << std::endl;
}
