#include "Zombie.hpp"

int	main()
{
	Zombie *horde = zombieHorde(5, "Yulya");

	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
