#include "PhoneBook.hpp"

std::string	readString(std::istream& stream)
{
	std::string string;

	std::getline(stream, string);
	return (string);
}

void	add_contact(PhoneBook *phonebook)
{
	Contact	new_contact;

	std::cout << "Enter first name:" << std::endl;
	new_contact.setFirstName(readString(std::cin));
	std::cout << "Enter last name:" << std::endl;
	new_contact.setLastName(readString(std::cin));
	std::cout << "Enter nickname:" << std::endl;
	new_contact.setNickname(readString(std::cin));
	std::cout << "Enter phone number:" << std::endl;
	new_contact.setPhoneNumber(readString(std::cin));
	std::cout << "Enter darkest secret:" << std::endl;
	new_contact.setDarkestSecret(readString(std::cin));
	phonebook->add(new_contact);
	std::cout << "The contact \"";
	std::cout << new_contact.getFirstName() << " " << new_contact.getLastName();
	std::cout << "\" was successfully added" << std::endl;
}

void	search_contact(PhoneBook *phonebook)
{
	std::string	str;
	int			index;

	if (phonebook->count == 0)
	{
		std::cout << "There are no contacts in your phonebook" << std::endl;
		return;
	}
	phonebook->search();
	std::cout << "Enter contact index to get more information:\n";
	std::getline(std::cin, str);
	index = str[0] - '0';
	if (str.size() != 1 || !isdigit(str[0]) || index < 1 || index > phonebook->count)
		std::cout << "Error: invalid index" << std::endl;
	else
	{
		std::cout << "First name: " << phonebook->contacts[index - 1].getFirstName() << std::endl;
		std::cout << "Last name: " << phonebook->contacts[index - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << phonebook->contacts[index - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << phonebook->contacts[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << phonebook->contacts[index - 1].getDarkestSecret() << std::endl;
	}
}

int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		phonebook.usage();
		std::getline(std::cin, command);
		if (command == "ADD")
			add_contact(&phonebook);
		else if (command == "SEARCH")
			search_contact(&phonebook);
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Command not found" << std::endl;
	}
	return 0;
}
