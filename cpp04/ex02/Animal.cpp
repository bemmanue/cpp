#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal default constructor was called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor was called" << std::endl;
}

Animal::Animal(Animal const & animal)
{
	std::cout << "Animal copy constructor was called" << std::endl;
	this->type = animal.type;
}

Animal & Animal::operator = (Animal const & animal)
{
	std::cout << "Animal assignation operator was called" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << type << " says booo booo..." << std::endl;
}

void	Animal::printIdeas() const
{
	std::cout << "There is no brain and there are no ideas" << std::endl;
}

void	Animal::setIdeas(std::string idea)
{
	std::cout << "There is no brain and there are no ideas" << std::endl;
}
