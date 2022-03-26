#include "Fixed.hpp"

int const Fixed::bits = 8;

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << Fixed::bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream & operator << (std::ostream &stream, const Fixed &fixed)
{
	return stream << fixed.toFloat();
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	value = copy.getRawBits();
}

void	Fixed::setRawBits(const int raw)
{
	value = raw;
}

int	Fixed::getRawBits() const
{
	return value;
}

Fixed & Fixed::operator = (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = copy.getRawBits();
	return *this;
}

int	Fixed::toInt() const
{
	return value >> bits;
}

float	Fixed::toFloat() const
{
	return (float(value) / (1 << Fixed::bits));
}
