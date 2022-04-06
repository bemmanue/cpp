#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <exception>

enum type
{
	char_type,
	int_type,
	float_type,
	double_type,
	invalid_type
};

class Converter
{
public:
	Converter();
	~Converter();
	Converter(std::string value);
	Converter(const Converter& converter);
	Converter& operator=(const Converter& converter);

	class NonDisplayableException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	class ImpossibleException: public std::exception
	{
	public:
		const char* what() const throw();
	};

	operator char() const;
	operator int() const;
	operator float() const;
	operator double() const;

	void		setValue(std::string value);
	std::string	getValue() const;
	void		printConversionToChar() const;
	void		printConversionToInt() const;
	void		printConversionToFloat() const;
	void		printConversionToDouble() const;
private:
	void		setType();
	std::string	value;
	type		type;
};

bool	is_char(std::string value);
bool	is_int(std::string value);
bool	is_float(std::string value);
bool 	is_double(std::string value);

#endif
