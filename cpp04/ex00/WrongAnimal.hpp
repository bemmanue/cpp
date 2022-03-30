#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const & animal);
	WrongAnimal & operator = (WrongAnimal const & animal);
	void makeSound() const;
	std::string getType() const;
protected:
	std::string	type;
};

#endif