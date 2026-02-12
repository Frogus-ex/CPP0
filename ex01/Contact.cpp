#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getFirstname(void) const
{
	return (this->_firstname);
}

std::string Contact::getLastname(void) const
{
	return (this->_lastname);
}
std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getPhonenumber(void) const
{
	return (this->_phonenumber);
}

std::string Contact::getDarkestsecret(void) const
{
	return (this->_darkestsecret);
}

void Contact::add()
{
	while (Contact::_firstname.empty())
	{
		std::cout << "Enter Firstname\n";
		getline(std::cin, Contact::_firstname);
		if (std::cin.eof())
			return ;
		if (Contact::_firstname.empty())
			std::cout << "Firstname cannot be an empty field\n";
	}
	while (Contact::_lastname.empty())
	{
		std::cout << "Enter Lastname\n";
		getline(std::cin, Contact::_lastname);
		if (std::cin.eof())
			return ;
		if (Contact::_lastname.empty())
			std::cout << "Lastname cannot be an empty field\n";
	}
	while (Contact::_nickname.empty())
	{
		std::cout << "Enter Nickname\n";
		getline(std::cin, Contact::_nickname);
		if (std::cin.eof())
			return ;
		if (Contact::_nickname.empty())
			std::cout << "Nickname cannot be an empty field\n";
	}
	while (Contact::_phonenumber.empty())
	{
		std::cout << "Enter Phonenumber\n";
		getline(std::cin, Contact::_phonenumber);
		if (std::cin.eof())
			return ;
		if (Contact::_phonenumber.empty())
			std::cout << "Phonenumber cannot be an empty field\n";
	}
	while (Contact::_darkestsecret.empty())
	{
		std::cout << "Enter DarkestSecret\n";
		getline(std::cin, Contact::_darkestsecret);
		if (std::cin.eof())
			return ;
		if (Contact::_darkestsecret.empty())
			std::cout << "DarkestSecret cannot be an empty field\n";
	}
	std::cout << "your new contact as been successfully added\n";
}
