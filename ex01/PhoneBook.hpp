#pragma once
#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	private :
	Contact _contacts[8];
	int	_index;
	int	_count;

	public :
	PhoneBook();
	~PhoneBook();
	int	get_index();
	void getContact(int index);
	void ShowContact();
};
