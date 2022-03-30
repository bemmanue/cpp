#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor was called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor was called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & cat)
{
	std::cout << "WrongCat copy constructor was called" << std::endl;
	this->type = cat.type;
}

WrongCat & WrongCat::operator = (WrongCat const & cat)
{
	std::cout << "WrongCat assignation operator was called" << std::endl;
	this->type = cat.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << type << " says myau myau..." << std::endl;
}
