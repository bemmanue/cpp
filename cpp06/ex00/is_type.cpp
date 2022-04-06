#include "Converter.hpp"

bool	is_char(const std::string value)
{
	if (value.length() == 1 && !isdigit(value[0]))
		return true;
	return false;
}

bool	is_int(const std::string value)
{
	unsigned	i = 0;

	if (value[i] == '-' || value[i] == '+')
		i++;
	while (i < value.length())
	{
		if (!isdigit(value[i]) || i > 10)
			return false;
		i++;
	}
	return true;
}

bool	is_float(const std::string value)
{
	unsigned	i = 0;
	unsigned	digit = 0;
	bool		point = false;

	if (value == "-inff" || value == "+inff" || value == "nanf")
		return true;
	if (value[i] == '-' || value[i] == '+')
		i++;
	while (i < value.length() - 1)
	{
		if (value[i] == '.')
		{
			if (point || !value[i + 1] || value[i + 1] == 'f')
				return false;
			point = true;
		}
		else if (!isdigit(value[i]))
			return false;
		else
			digit++;
		i++;
	}
	if (value[i] == 'f' && digit > 0)
		return true;
	return false;
}

bool	is_double(const std::string value)
{
	unsigned	i = 0;
	unsigned	digit = 0;
	bool		point = false;

	if (value == "-inf" || value == "+inf" || value == "nan")
		return true;
	if (value[i] == '-' || value[i] == '+')
		i++;
	while (i < value.length())
	{
		if (value[i] == '.')
		{
			if (point || !value[i + 1])
				return false;
			point = true;
		}
		else if (!isdigit(value[i]))
			return false;
		else
			digit++;
		i++;
	}
	if (!point || !digit)
		return false;
	return true;
}