#include <iostream>

struct Data
{
	Data(int i, char c, float f, double d): i(i), c(c), f(f), d(d) { }
	char	c;
	int		i;
	float	f;
	double	d;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream& stream, const Data& data)
{
	stream << "char: " << data.c << std::endl;
	stream << "int: " << data.i << std::endl;
	stream << "float: " << data.f << std::endl;
	stream << "double: " << data.d << std::endl;
	return stream;
}

int main()
{
	Data *data = new Data(42, '*', 42.0f, 42.0);
	uintptr_t raw = serialize(data);
	std::cout << raw << std::endl;
	std::cout << "--------------------" << std::endl;
	Data *other = deserialize(raw);
	std::cout << *other << std::endl;
}
