#include "Fixed.hpp"

int const Fixed::BITS = 8;

Fixed::Fixed(): value(0)
{
}

Fixed::Fixed(const int value)
{
	this->value = value << Fixed::BITS;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << Fixed::BITS));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copy)
{
	value = copy.getRawBits();
}

std::ostream & operator << (std::ostream &stream, const Fixed &fixed)
{
	return stream << fixed.toFloat();
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
	value = copy.getRawBits();
	return *this;
}

int	Fixed::toInt() const
{
	return value >> BITS;
}

float	Fixed::toFloat() const
{
	return (float(value) / (1 << Fixed::BITS));
}

bool	Fixed::operator > (const Fixed & other) const
{
	return (this->value > other.value);
}

bool	Fixed::operator < (const Fixed & other) const
{
	return (this->value < other.value);
}

bool	Fixed::operator >= (const Fixed & other) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator <= (const Fixed & other) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator == (const Fixed & other) const
{
	return (this->value == other.value);
}

bool	Fixed::operator != (const Fixed & other) const
{
	return (this->value != other.value);
}

Fixed	&Fixed::operator++ ()
{
	this->value++;
	return *this;
}

Fixed &Fixed::operator-- ()
{
	value--;
	return *this;
}

Fixed	Fixed::operator++ (int)
{
	Fixed new_fixed(*this);
	this->value++;
	return new_fixed;
}

Fixed	Fixed::operator-- (int)
{
	Fixed new_fixed(*this);
	this->value--;
	return new_fixed;
}

Fixed	Fixed::operator * (const Fixed &multiplier) const
{
	return Fixed(this->toFloat() * multiplier.toFloat());
}

Fixed	Fixed::operator / (const Fixed &multiplier) const
{
	return Fixed(this->toFloat() / multiplier.toFloat());
}

Fixed	Fixed::operator + (const Fixed &multiplier) const
{
	return Fixed(this->toFloat() + multiplier.toFloat());
}

Fixed	Fixed::operator - (const Fixed &multiplier) const
{
	return Fixed(this->toFloat() - multiplier.toFloat());
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return first;
	return second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return first;
	return second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first < second)
		return first;
	return second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return first;
	return second;
}
