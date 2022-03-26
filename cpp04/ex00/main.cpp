#include <iostream>

class Animal
{
public:
	virtual void makeSound();
protected:
	std::string	type;
};

class Dog : public Animal
{
	void makeSound() override;
protected:
	std::string	type;
};

class Cat : public Animal
{
	void makeSound() override;
protected:
	std::string	type;
};

void Animal::

int main()
{
	return 0;
}