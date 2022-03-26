#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>

class File
{
public:
	~File();
	File(std::string file);
	void	replace(std::string old_str, std::string new_str);
private:
	std::ifstream	fin;
	std::ofstream	fout;
};

#endif
