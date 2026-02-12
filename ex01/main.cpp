#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook phonebook;
	Contact Contact;
	std::string tmp;
	int	index = 0;
	while (1)
	{
		if (std::cin.eof())
			break;
		getline(std::cin, tmp);
		if (tmp == "exit")
			break ;
		if (tmp == "add")
		{
			phonebook.getContact(index);
			index++;
			if (index == 8)
				index = 0;
		}
		if (tmp == "search")
		{
			phonebook.ShowContact();
		}
	}
	return (0);
}