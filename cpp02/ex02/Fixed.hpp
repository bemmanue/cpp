#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed(const Fixed &copy);
	Fixed & operator = (const Fixed &copy);

	bool operator > (const Fixed & other) const;
	bool operator < (const Fixed & other) const;
	bool operator >= (const Fixed & other) const;
	bool operator <= (const Fixed & other) const;
	bool operator == (const Fixed & other) const;
	bool operator != (const Fixed & other) const;

	Fixed operator * (const Fixed &multiplier) const;
	Fixed operator / (const Fixed &multiplier) const;
	Fixed operator + (const Fixed &multiplier) const;
	Fixed operator - (const Fixed &multiplier) const;

	Fixed & operator++ ();
	Fixed & operator-- ();
	Fixed operator++ (int);
	Fixed operator-- (int);

	static Fixed &min(Fixed &first, Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &min(const Fixed &first, const Fixed &second);
	static const Fixed &max(const Fixed &first, const Fixed &second);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

private:
	int					value;
	static const int	BITS;
};

std::ostream & operator << (std::ostream &stream, const Fixed &fixed);

#endif
