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
	void			printIdeas() const;
private:
	Brain	*brain;
};

#endif
