#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;
	Contact		Contact;
	int			num;
	int			index;

	std::string tmp;
	index = 1;
	while (1)
	{
		getline(std::cin, tmp);
		if (std::cin.eof())
			break ;
		if (tmp == "EXIT")
			break ;
		else if (tmp == "ADD")
		{
			if (index == 9)
				index = 1;
			phonebook.getContact(index);
			index++;
		}
		else if (tmp == "SEARCH")
		{
			phonebook.ShowContact();
			getline(std::cin, tmp);
			if (std::cin.eof())
				break ;
			if (tmp.size() == 1 && std::isdigit(static_cast<unsigned char>(tmp[0])))
				num = std::atoi(tmp.c_str());
			if (num >= 1 && num <= 8)
				phonebook.PrintContact(tmp);
			else if (num < 1 || num > 8)
				std::cout << RED << "this contact index is out of range\n" << RESET;
		}
		else
			std::cout << RED << "WRONG INSTRUCTION\n" << RESET;
	}
	return (0);
}
