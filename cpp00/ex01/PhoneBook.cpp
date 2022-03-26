#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(const Contact &newcontact)
{
	Contact	temp;

	if (this->count < 8)
	{
		this->contacts[count] = newcontact;
		this->count++;
	}
	else
	{
		for (int index = 0; index < 7; index++)
			this->contacts[index] = this->contacts[index + 1];
		this->contacts[7] = newcontact;
	}
}

void	PhoneBook::usage()
{
	std::cout << "Enter one of these commands: ADD/SEARCH/EXIT" << std::endl;
}

void	display_cut(std::string str)
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".";
}

void	display(const std::string &str)
{
	if (str.length() > 10)
		display_cut(str);
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void	PhoneBook::search()
{
	int index = 0;

	while (index < this->count)
	{
		std::cout << "|CONTACT #" << index + 1 << "|";
		display(contacts[index].getFirstName());
		display(contacts[index].getLastName());
		display(contacts[index].getNickname());
		std::cout << std::endl;
		index++;
	}
}
