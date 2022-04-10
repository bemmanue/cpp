#include "Span.hpp"

int main()
{
	try
	{
		Span span1 = Span(6);
		span1.addNumber(6);
		span1.addNumber(3);
		span1.addNumber(17);
		span1.addNumber(9);
		span1.addNumber(11);
		span1.getInfo();
		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;

	try
	{
		Span span2 = Span(6);
		span2.addNumber(8);
		span2.addNumber(-4);
		span2.addNumber(170);
		span2.getInfo();
		Span copy2 = span2;
		copy2.getInfo();
		std::cout << copy2.shortestSpan() << std::endl;
		std::cout << copy2.longestSpan() << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;

	try
	{
		Span span3 = Span(1000);
		span3.fillArray(1000);
		Span copy3 = span3;
		copy3.addNumber(99);
		std::cout << copy3.shortestSpan() << std::endl;
		std::cout << copy3.longestSpan() << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
	return 0;
}
