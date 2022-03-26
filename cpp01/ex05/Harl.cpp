#include "Harl.hpp"

Harl::Harl()
{
	action[0] = &Harl::debug;
	action[1] = &Harl::info;
	action[2] = &Harl::warning;
	action[3] = &Harl::error;
}

void	Harl::debug()
{
	std::cout << "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "Seriously, it's not funny." << std::endl;
}

void	Harl::warning()
{
	std::cout << "Do you really think that's okay? I got bad news for you." << std::endl;
}

void	Harl::error()
{
	std::cout << "Oh, i don't want to explain it, just leave me alone." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = 0;

	while (level != levels[index] && index < 4)
		index++;
	if (index == 4)
	{
		std::cout << "There is no level \"" << level << "\"" << std::endl;
		return;
	}
	(this->*action[index])();
}
