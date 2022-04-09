#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	print(T &value)
{
	value += 65;
}

template <typename T>
void	iter(T *array, size_t size, void (*f)(T&))
{
	for (int i = 0; i < size; i++)
	{
		f(array[i]);
		std::cout << array[i] << std::endl;
	}
}

#endif
