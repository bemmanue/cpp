#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "eating, playing, sleeping";
}

Brain::~Brain()
{
}

Brain::Brain(Brain const & brain)
{
}

Brain & Brain::operator = (const Brain &brain)
{
	return *this;
}
