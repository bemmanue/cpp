#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	virtual ~Animal();
	Animal(Animal const & animal);
	Animal & operator = (Animal const & animal);
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string	type;
};

#endif
