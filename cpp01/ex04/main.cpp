#include "File.hpp"

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		try
		{
			File file(argv[1]);
			file.replace(argv[2], argv[3]);
		}
		catch (const char *error)
		{
			std::cerr << error << std::endl;
		}
	}
	else
		std::cout << "Enter three arguments: a filename and two strings" << std::endl;
	return 0;
}
