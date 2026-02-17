#pragma once
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstdlib> 

class PhoneBook
{
	private :
	Contact _contacts[8];
	int	_index;
	std::string formatColumn(const std::string &str) const;

	public :
	PhoneBook();
	~PhoneBook();
	int	get_index();
	void getContact(int index);
	void ShowContact();
	void PrintContact(std::string tmp);
};
