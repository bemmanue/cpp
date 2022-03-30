#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(WrongCat const & cat);
	WrongCat & operator = (WrongCat const & cat);
	virtual void makeSound() const;
};

#endif