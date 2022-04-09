#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
public:
	Array();
	~Array();
	explicit Array(size_t n);
	Array(const Array& array);
	Array& operator=(const Array& array);

	T& operator[](size_t index);
	size_t	size();
	class InvalidIndexException: public std::exception
	{
	public:
		const char* what() const throw();
	};
private:
	T		*elements;
	size_t	size_of_elements;
};

#include "Array.tpp"

#endif
