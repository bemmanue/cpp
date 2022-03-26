#include "Zombie.hpp"

int	main()
{
	std::cout << COLOR("Create two zombies on heap:\n");
	Zombie	*Yulya = new Zombie("Yulya");
	Yulya->announce();
	Zombie	*Kamil = newZombie("Kamil");
	Kamil->announce();
	std::cout << COLOR("\nDelete them:\n");
	delete Yulya;
	delete Kamil;
	std::cout << COLOR("\nCreate random Chumps:\n");
	randomChump("Boris Petrovich");
	randomChump("Tamara Nikolaevna");
	return 0;
}
