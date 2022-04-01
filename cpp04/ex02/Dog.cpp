#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor was called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor was called" << std::endl;
	delete brain;
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

void	Dog::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << brain->getIdeas(i) << std::endl;
}

void	Dog::setIdeas(std::string idea)
{
	brain->setIdeas(idea);
}
