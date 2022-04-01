#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(Cat const & cat);
	Cat & operator = (Cat const & cat);
	virtual void	makeSound() const;
	virtual void	printIdeas() const;
	virtual void	setIdeas(std::string idea);
private:
	Brain	*brain;
};

#endif
