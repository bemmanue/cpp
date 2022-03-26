#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

#define COLOR(text) ("[38;2;50;150;200m" text "[0m")

class	Zombie
{
public:
	~Zombie();
	Zombie(void);
	Zombie(std::string name);
	void announce();
private:
	std::string	name;
};

void		randomChump(std::string name);
Zombie		*newZombie(std::string name);

#endif
