#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
	Weapon();
	~Weapon();
	Weapon(std::string type);
	const std::string	&getType();
	void				setType(std::string type);
private:
	std::string			type;
};

#endif
