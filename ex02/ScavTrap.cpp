#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << WHITE << "ScavTrap destructor was called" << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout	<< WHITE << "ScavTrap " << name
				 << " default constructor was called" << std::endl;
	this->name = "Unknown";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout	<< WHITE << "ScavTrap " << name
				 << " constructor was called" << std::endl;
	this->name = name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout	<< VIOLET << "ScavTrap " << name
				 << " is now in Gate keeper mode" << std::endl;
}
