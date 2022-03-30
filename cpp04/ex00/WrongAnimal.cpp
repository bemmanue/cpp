#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor was called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & animal)
{
	std::cout << "WrongAnimal copy constructor was called" << std::endl;
	this->type = animal.type;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const & animal)
{
	std::cout << "WrongAnimal assignation operator was called" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << " says booo booo..." << std::endl;
}