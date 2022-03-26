#include "Contact.hpp"

Contact::~Contact()
{
}

void	Contact::setFirstName(const std::string &first_name)
{
	this->first_name = first_name;
}

void	Contact::setLastName(const std::string &last_name)
{
	this->last_name = last_name;
}

void	Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string &phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::setDarkestSecret(const std::string &darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string	Contact::getFirstName()
{
	return first_name;
}

std::string	Contact::getLastName()
{
	return last_name;
}

std::string	Contact::getNickname()
{
	return nickname;
}

std::string	Contact::getPhoneNumber()
{
	return phone_number;
}

std::string	Contact::getDarkestSecret()
{
	return darkest_secret;
}
