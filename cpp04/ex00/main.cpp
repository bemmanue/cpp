#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* lol = new Animal();
	const Animal* kek = new Dog();
	const Animal* mek = new Cat();

	std::cout << kek->getType() << " " << std::endl;
	std::cout << mek->getType() << " " << std::endl;
	kek->makeSound();
	mek->makeSound();
	lol->makeSound();

	delete lol;
	delete kek;
	delete mek;

	std::cout << "-----------------------------------" << std::endl;

	const WrongAnimal* myau = new WrongCat();

	std::cout << myau->getType() << " " << std::endl;
	myau->makeSound();

	delete myau;
	return 0;
}
