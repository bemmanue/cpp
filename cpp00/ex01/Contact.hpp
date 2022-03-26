#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
public:
	~Contact();
	void				setFirstName(const std::string &first_name);
	void				setLastName(const std::string &last_name);
	void				setNickname(const std::string &nickname);
	void				setPhoneNumber(const std::string &phone_number);
	void				setDarkestSecret(const std::string &darkest_secret);
	std::string			getFirstName();
	std::string			getLastName();
	std::string			getNickname();
	std::string			getPhoneNumber();
	std::string			getDarkestSecret();
private:
	std::string 		first_name;
	std::string 		last_name;
	std::string			nickname;
	std::string			phone_number;
	std::string			darkest_secret;
};

#endif
