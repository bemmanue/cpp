#include "File.hpp"

File::~File()
{
	fin.close();
	fout.close();
}

File::File(std::string file): fin(file), fout(file + ".replace")
{
}

void	File::replace(std::string old_str, std::string new_str)
{
	std::string string;

	if (!fin)
		throw ("Failed to open file");
	std::getline(fin, string);
	if (string.empty())
		throw ("The file is empty");
	std::size_t found;
	while ((found = string.find(old_str)) != std::string::npos)
	{
		string.erase(found, old_str.length());
		string.insert(found, new_str);
	}
	fout << string << std::endl;
}
