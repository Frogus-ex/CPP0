#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook() : _index(1)
{
}
PhoneBook::~PhoneBook()
{
}

int PhoneBook::get_index()
{
	return (this->_index);
}

void PhoneBook:: getContact(int index)
{
	_contacts[index - 1].add();
}

std::string PhoneBook::formatColumn(const std::string &str) const
{
	std::string result = str;
	if (result.length() > 10)
	{
		result = result.substr(0, 9);
		result += '.';
	}
	return (result);
	// return (std::string(10 - result.length(), ' ') + result);
}

void PhoneBook::ShowContact()
{
	int i = 0;
	std::cout << MAGENTA << std::right << std::setw(10) << "index"
		<< "|"
		<< std::setw(10) << "Firstname"
		<< "|"
		<< std::setw(10) << "Lastname"
		<< "|"
		<< std::setw(10) << "Nickname" << RESET
		<< "\n";
	while (i < 8)
	{
		if (_contacts[i].getFirstname().empty())
			return ;
		std::stringstream ss;
		ss << (i + 1);
		std::cout << std::setw(10) << formatColumn(ss.str())
		<< "|" << std::setw(10) << formatColumn(_contacts[i].getFirstname())
		<< "|" << std::setw(10) << formatColumn(_contacts[i].getLastname())
		<< "|" << std::setw(10) << formatColumn(_contacts[i].getNickname()) << "\n";
		i++;
	}
}

void PhoneBook::PrintContact(std::string tmp)
{
	int input = atoi(tmp.c_str());
	if (input >= 1 && input <= 8)
	{
		if (_contacts[input - 1].getFirstname().empty())
		{
			std::cout << "this contact is empty\n";
			return ;
		}
		std::cout << tmp
		<< "\n" << _contacts[input - 1].getFirstname()
		<< "\n" << _contacts[input - 1].getLastname()
		<< "\n" << _contacts[input - 1].getNickname()
		<< "\n" << _contacts[input - 1].getPhonenumber()
		<< "\n" << _contacts[input - 1].getDarkestsecret() << "\n";
	}
}