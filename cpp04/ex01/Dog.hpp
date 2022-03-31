#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(Dog const & dog);
	Dog & operator = (Dog const & dog);
	virtual void	makeSound() const;
	void	printIdeas() const;
private:
	Brain	*brain;
};

#endif
