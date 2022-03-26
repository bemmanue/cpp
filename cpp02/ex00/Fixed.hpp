#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed & operator = (const Fixed &copy);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					value;
	static const int	bits;
};

#endif
