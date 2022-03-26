#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	Contact			contacts[8];
	int				count;
	void			add(const Contact &newcontact);
	void			search();
	void			usage();
};

#endif
