#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << WHITE << "FragTrap destructor was called" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout	<< WHITE << "FragTrap " << name
				<< " default constructor was called" << std::endl;
	this->name = "Unknown";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout	<< WHITE << "FragTrap " << name
				 << " constructor was called" << std::endl;
	this->name = name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

FragTrap & FragTrap::operator = (const FragTrap &copy)
{
	std::cout << WHITE << "Copy assignment operator called" << std::endl;
	name = copy.name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return *this;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << WHITE << "Copy constructor called" << std::endl;
	name = copy.name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
}

void	FragTrap::highFivesGuys()
{
	std::cout << VIOLET << "FragTrap " << this->name << ": gives High Five!\n";
}

void	FragTrap::getInfo()
{
	std::cout	<< BLUE << "FragTrap " << name << " has "
				 << hit_points << " hit points, "
				 << energy_points << " energy points and "
				 << attack_damage << " attack_damage" << std::endl;
}
