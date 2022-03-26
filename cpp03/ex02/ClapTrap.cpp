#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << WHITE <<  "ClapTrap default constructor was called" << std::endl;
	this->name = "Unknown";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << WHITE <<  "ClapTrap constructor was called" << std::endl;
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << WHITE << "ClapTrap destructor was called" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = copy.name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	name = copy.name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
}

void	ClapTrap::attack(const std::string & target)
{
	if (hit_points == 0)
	{
		std::cout	<< YELLOW << "ClapTrap " << name
					 << " has no energy points to attack" << std::endl;
		return ;
	}
	if (hit_points < attack_damage)
	{
		std::cout << YELLOW << "ClapTrap " << name << " attacks " << target
				  << " causing only " << hit_points << " points of damage"
				  << std::endl;
		hit_points = 0;
		return ;
	}
	else
	{
		hit_points -= attack_damage;
		std::cout << RED << "ClapTrap " << name << " attacks " << target
				  << " causing " << attack_damage << " points of damage"
				  << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= amount)
	{
		hit_points = 0;
		if (energy_points == 0)
		{
			std::cout << BLUE << "ClapTrap " << name << " was defeated" << std::endl;
		}
		else
		{
			std::cout << WHITE << "ClapTrap " << name
					  << " lost all hit points while the attack" << std::endl;
		}
		return;
	}
	else
	{
		hit_points -= amount;
		std::cout	<< WHITE << "ClapTrap " << name << " lost " << amount
					 << " hit points while the attack" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points == 0)
	{
		std::cout	<< YELLOW << this->name
					 << " has no energy points to be repaied" << std::endl;
		return ;
	}
	if (energy_points < amount)
	{
		std::cout	<< VIOLET << "ClapTrap " << name << " repairs itself with only "
					 << energy_points << " points" << std::endl;
		hit_points += energy_points;
		energy_points = 0;
		return ;
	}
	else
	{
		std::cout	<< VIOLET << "ClapTrap " << name << " repairs itself with "
					 << amount << " points" << std::endl;
		hit_points += amount;
		energy_points -= amount;
	}
}

void	ClapTrap::setDamage(unsigned int amount)
{
	attack_damage = amount;
}

void	ClapTrap::getInfo()
{
	std::cout	<< BLUE << "ClapTrap " << name << " has "
				<< hit_points << " hit points, "
				<< energy_points << " energy points and "
				<< attack_damage << " attack_damage" << std::endl;
}
