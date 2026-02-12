#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0)
{
}
PhoneBook::~PhoneBook()
{
}

int PhoneBook::get_index()
{
	return (this->_index);
}

void PhoneBook::getContact(int index)
{
	_contacts[index].add();
	if (index == 8)
		index = 0;
	else
		index++;
}

void	PhoneBook::ShowContact()
{
	int	i = 0;
	std::string tmp;
	while (i < 6)
	{
		if (_contacts[i].getFirstname().empty())
			return ;
		std::cout << i << "|" << _contacts[i].getFirstname() << "|" << _contacts[i].getLastname() << "|" << _contacts[i].getNickname() << "\n";
		i++;
	}
}