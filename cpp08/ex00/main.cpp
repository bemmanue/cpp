#include "easyfind.hpp"

int	main()
{
	std::vector<int> vector;

	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
		vector.push_back(i);
	try
	{
		int value = easyfind(vector, 0);
		std::cout << "The value " << value << " was found" << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		int value = easyfind(vector, 10);
		std::cout << "The value " << value << " was found" << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}

	std::list<int> list;
	for (int i = 0; i < 10; i++)
		list.push_front(i);
	try
	{
		int value = easyfind(list, 9);
		std::cout << "The value " << value << " was found" << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		int value = easyfind(list, -1);
		std::cout << "The value " << value << " was found" << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	return 0;
}