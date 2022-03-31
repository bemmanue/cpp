#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Dog* j = new Dog();
	const Animal* i = new Cat();
	j->printIdeas();
	delete j;
	delete i;
	return 0;
}
