#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	~HumanB();
	HumanB(std::string name);
	void		attack();
	void		setWeapon(Weapon &weapon);
private:
	Weapon		*weapon;
	std::string	name;
};

#endif
