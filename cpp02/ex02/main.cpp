#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed c((Fixed(3.5f) + Fixed(3.4f) - Fixed(8.9f)) / Fixed(4.5f));
	std::cout << c.toInt() << std::endl;
	std::cout << c.toFloat() << std::endl;
	std::cout << Fixed::min(b, c) << std::endl;
	return 0;
}
