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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;
private:
	int					value;
	static const int	bits;
};

std::ostream & operator << (std::ostream &stream, const Fixed &fixed);

#endif
