#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap lol;
	lol.getInfo();
	std::cout << std::endl;

	ScavTrap kek;
	kek.getInfo();
	kek.guardGate();
	std::cout << std::endl;

	FragTrap mek;
	mek.getInfo();
	mek.highFivesGuys();
	std::cout << std::endl;
	return 0;
}
