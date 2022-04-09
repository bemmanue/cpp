#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(): elements(nullptr), size_of_elements(0)
{
}

template <typename T>
Array<T>::~Array()
{
	delete elements;
}

template <typename T>
Array<T>::Array(size_t n)
{
	elements = new T[n];
	size_of_elements = n;
}

template <typename T>
Array<T>::Array(const Array& array)
{
	size_of_elements = array.size_of_elements;
	elements = new T[size_of_elements];
	for (int i = 0; i < size_of_elements; i++)
		elements[i] = array.elements[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& array)
{
	size_of_elements = array.size_of_elements;
	elements = new T[size_of_elements];
	for (int i = 0; i < size_of_elements; i++)
		elements[i] = array[i];
	return *this;
}

template <typename T>
T&	Array<T>::operator[](size_t index)
{
	if (index >= size_of_elements)
		throw InvalidIndexException();
	return elements[index];
}

template <typename T>
size_t	Array<T>::size()
{
	return size_of_elements;
}

template <typename T>
const char*	Array<T>::InvalidIndexException::what() const throw()
{
	return ("Invalid index");
}

#endif
