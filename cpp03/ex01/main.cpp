#include "ScavTrap.hpp"

int main()
{
	unsigned int damage = 30;

	ScavTrap tamara("Tamara Petrovna");
	tamara.getInfo();
	tamara.setDamage(damage);
	tamara.guardGate();

	tamara.attack("Boris Nikolaevich");
	tamara.getInfo();
	std::cout << std::endl;

	ScavTrap borya("Boris Nikolaevich");
	borya.getInfo();
	borya.takeDamage(damage);
	borya.getInfo();
	std::cout << std::endl;

	ScavTrap counterpart(tamara);
	counterpart.getInfo();
	std::cout << std::endl;

	ScavTrap counterpart2 = borya;
	counterpart2.getInfo();
	std::cout << std::endl;
	return 0;
}
