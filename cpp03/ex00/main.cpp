#include "ClapTrap.hpp"

int main()
{
	ClapTrap yulya("Yulya");
	ClapTrap kamil("Kamil");

	std::cout << WHITE << "\nFirst round:" << std::endl;
	unsigned int damage_amount = 3;
	yulya.setDamage(damage_amount);
	kamil.setDamage(damage_amount);
	for (int i = 0; i < (10 / damage_amount); i++)
	{
		yulya.attack("Kamil");
		kamil.takeDamage(damage_amount);
	}
	yulya.attack("Kamil");

	std::cout << WHITE << "\nBreak:" << std::endl;
	yulya.beRepaired(9);
	kamil.beRepaired(9);

	std::cout << WHITE << "\nSecond round:" << std::endl;
	damage_amount = 3;
	yulya.setDamage(damage_amount);
	kamil.setDamage(damage_amount);
	for (int i = 0; i < (10 / damage_amount); i++)
	{
		kamil.attack("Yulya");
		yulya.takeDamage(damage_amount);
	}
	kamil.attack("Kamil");

	std::cout << WHITE << "\nBreak:" << std::endl;
	yulya.beRepaired(10);
	kamil.beRepaired(10);

	std::cout << WHITE << "\nThird round:" << std::endl;
	damage_amount = 2;
	yulya.setDamage(damage_amount);
	kamil.setDamage(damage_amount);
	yulya.attack("Yulya");
	kamil.takeDamage(damage_amount);

	std::cout << std::endl;
	return 0;
}
