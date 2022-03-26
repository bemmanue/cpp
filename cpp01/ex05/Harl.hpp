#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
public:
	Harl();
	void	complain(std::string level);
private:
	void	(Harl::*action[4])();
	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif
