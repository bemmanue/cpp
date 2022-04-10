#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

#define DEFAULT_N	10

class Span
{
public:
	Span();
	~Span();
	Span(size_t N);
	Span(const Span& source);
	Span& operator=(const Span& source);

	void			getInfo();
	void			addNumber(int value);
	void			fillArray(size_t count);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	class LackOfSpaceException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	class FewNumbersException: public std::exception
	{
	public:
		const char* what() const throw();
	};
private:
	size_t				N_;
	size_t				free_space_;
	std::vector<int>	container_;
};

#endif
