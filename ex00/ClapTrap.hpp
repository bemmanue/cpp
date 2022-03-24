#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define RED 	"[38;2;230;80;70m"
#define BLUE 	"[38;2;140;180;200m"
#define WHITE 	"[38;2;190;190;190m"
#define YELLOW 	"[38;2;220;170;60m"
#define VIOLET 	"[38;2;200;120;200m"

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string);
	~ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap & operator = (const ClapTrap &copy);
	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setDamage(unsigned int amount);
private:
	std::string	name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;
};

#endif
