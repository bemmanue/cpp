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
	virtual void	printIdeas() const;
	virtual void	setIdeas(std::string idea);
private:
	Brain	*brain;
};

#endif
