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

	std::string 	getType() const;
	virtual void 	makeSound() const = 0;
	virtual void	printIdeas() const;
	virtual void	setIdeas(std::string idea);
protected:
	std::string	type;
};

#endif
