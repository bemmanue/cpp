#include "Converter.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Converter converter(argv[1]);
		converter.printConversionToChar();
		converter.printConversionToInt();
		converter.printConversionToFloat();
		converter.printConversionToDouble();
	}
	else
		std::cout << "Invalid argument" << std::endl;
	return 0;
}
