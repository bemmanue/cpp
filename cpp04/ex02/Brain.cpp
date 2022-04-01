#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor was called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "eating";
}

Brain::~Brain()
{
	std::cout << "Brain destructor was called" << std::endl;
}

Brain::Brain(Brain const & brain)
{
	std::cout << "Brain copy constructor was called" << std::endl;
}

Brain & Brain::operator = (const Brain &brain)
{
	std::cout << "Brain assignation constructor was called" << std::endl;
	return *this;
}

std::string	Brain::getIdeas(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cout << "There is no idea with such index" << std::endl;
		return NULL;
	}
	return ideas[index];
}

void	Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}
