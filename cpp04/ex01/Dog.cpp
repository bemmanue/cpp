#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor was called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor was called" << std::endl;
}

Dog::Dog(Dog const & dog)
{
	std::cout << "Dog copy constructor was called" << std::endl;
	this->type = dog.type;
}

Dog & Dog::operator = (Dog const & dog)
{
	std::cout << "Dog assignation operator was called" << std::endl;
	this->type = dog.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << type << " says woof woof..." << std::endl;
}
