#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*array[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		array[i]->makeSound();
	}
	std::cout << "----------------------------------------" << std::endl;
	array[0]->setIdeas("sleeping");
	Animal *copy(array[0]);
	copy->printIdeas();
	std::cout << "----------------------------------------" << std::endl;
	for (int j = 0; j < 10; j++)
		delete array[j];
	return 0;
}
