#pragma once
#include <iostream>
#include <string>
#include <iomanip>

#define MAGENTA "\033[35m"
#define RED "\033[31m"
#define RESET    "\033[0m"

class Contact
{
  private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;

  public:
	Contact();
	Contact(std::string firstname, std::string lastname, std::string nickname,
		std::string phonenumber, std::string darkestsecret);
	~Contact();
	std::string getFirstname(void) const;
	std::string getLastname(void) const;
	std::string getNickname(void) const;
	std::string getPhonenumber(void) const;
	std::string getDarkestsecret(void) const;
	void add();
};