#include "PhoneBook.hpp"
#include <iostream>

std::string ask_input(std::string sentence)
{
	std::string ans;

	std::cout << sentence << std::endl;
	std::cin >> ans;
	return(ans);
}

void	PhoneBook::add_contact()
{
	std::string tmp;
	PhoneBook::contacts[id].setId(id);
	PhoneBook::contacts[id].setName("Hello what's your name ?");
	PhoneBook::contacts[id].setLastName("What's your last name ?");
	PhoneBook::contacts[id].setNick("Do you have a nickname ?");
	PhoneBook::contacts[id].setPhoneNumber("Can I have your 06 ?");
	PhoneBook::contacts[id].setDarkestSecret("do you have a darkest secret ?");


	id++;
}
