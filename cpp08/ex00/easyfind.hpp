#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <list>

template <typename T>
int	easyfind(T& container, int value)
{
	typename T::iterator iter = std::find
			(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::invalid_argument("The value was not found");
	return *iter;
}

#endif
