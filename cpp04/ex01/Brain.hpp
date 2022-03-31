#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(Brain const & brain);
	Brain & operator = (Brain const & brain);
	std::string		getIdeas(int index) const;
protected:
	std::string		ideas[100];
};

#endif
