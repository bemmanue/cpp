#include "Converter.hpp"

Converter::Converter(): value(nullptr)
{
}

Converter::Converter(std::string value): value(value)
{
	setType();
}

Converter::~Converter()
{
}

Converter::Converter(const Converter& converter)
{
	this->value = converter.getValue();
	this->type = converter.type;
}

Converter& Converter::operator=(const Converter& converter)
{
	this->value = converter.getValue();
	this->type = converter.type;
	return *this;
}

const char* Converter::NonDisplayableException::what() const throw()
{
	return "Non Displayable";
}

const char* Converter::ImpossibleException::what() const throw()
{
	return "impossible";
}

void	Converter::setType()
{
	if (is_char(value))
		type = char_type;
	else if (is_int(value))
		type = int_type;
	else if (is_float(value))
		type = float_type;
	else if (is_double(value))
		type = double_type;
	else
		type = invalid_type;
}

std::string	Converter::getValue() const
{
	return value;
}

std::string	Converter::getType() const
{
	if (type == char_type)
		return "char";
	if (type == int_type)
		return "int";
	if (type == float_type)
		return "float";
	if (type == double_type)
		return "double";
	else
		return "invalid";
}

void	Converter::setValue(std::string value)
{
	this->value = value;
	setType();
}

Converter::operator char() const
{
	if (type == char_type)
		return value[0];
	if (type == int_type)
	{
		if (!std::isprint(static_cast<char>(std::stoi(value))))
			throw NonDisplayableException();
		return static_cast<char>(std::stoi(value));
	}
	if (type == float_type)
	{
		if (value == "-inff" || value == "+inff" || value == "nanf")
			throw ImpossibleException();
		if (!std::isprint(static_cast<char>(std::stof(value))))
			throw NonDisplayableException();
		return static_cast<char>(std::stof(value));
	}
	if (type == double_type)
	{
		if (value == "-inf" || value == "+inf" || value == "nan")
			throw ImpossibleException();
		if (!std::isprint(static_cast<char>(std::stod(value))))
			throw NonDisplayableException();
		return static_cast<char>(std::stod(value));
	}
	else
		throw ImpossibleException();
}

Converter::operator int() const
{
	if (type == char_type)
		return static_cast<int>(value[0]);
	if (type == int_type)
		return std::stoi(value);
	if (type == float_type)
	{
		if (value == "-inff" || value == "+inff" || value == "nanf")
			throw ImpossibleException();
		return static_cast<int>(std::stof(value));
	}
	if (type == double_type)
	{
		if (value == "-inf" || value == "+inf" || value == "nan")
			throw ImpossibleException();
		return static_cast<int>(std::stod(value));
	}
	else
		throw ImpossibleException();
}

Converter::operator float() const
{
	if (type == char_type)
		return static_cast<float>(value[0]);
	if (type == int_type)
		return static_cast<float>(std::stoi(value));
	if (type == float_type)
		return std::stof(value);
	if (type == double_type)
		return static_cast<float>(std::stod(value));
	else
		throw ImpossibleException();
}

Converter::operator double() const
{
	if (type == char_type)
		return static_cast<double>(value[0]);
	if (type == int_type)
		return static_cast<double>(std::stoi(value));
	if (type == float_type)
		return static_cast<double>(std::stof(value));
	if (type == double_type)
		return std::stod(value);
	else
		throw ImpossibleException();
}

void	Converter::printConversionToChar() const
{
	std::cout << "char: ";
	try
	{
		std::cout << (char)*this << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}

void	Converter::printConversionToInt() const
{
	std::cout << "int: ";
	try
	{
		std::cout << (int)*this << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}

void	Converter::printConversionToFloat() const
{
	std::cout << "float: ";
	try
	{
		std::cout	<< (float)*this
					<< (static_cast<int>((float)*this) - ((float)*this) ? "f" : ".0f")
					<< std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}

void	Converter::printConversionToDouble() const
{
	std::cout << "double: ";
	try
	{
		std::cout	<< (double)*this
					<< (static_cast<int>((double)*this) - ((double)*this) ? "" : ".0")
					<< std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}
