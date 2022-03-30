#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(Dog const & dog);
	Dog & operator = (Dog const & dog);
	virtual void makeSound() const;
private:
	Brain	*brain;
};

#endif
