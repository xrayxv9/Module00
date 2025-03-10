#include "PhoneBook.hpp"
#include <iostream>
#include <memory>

std::string ask_input(std::string sentence)
{
	std::string ans;

	std::cout << sentence << std::endl;
	std::cin >> ans;
	return(ans);
}

PhoneBook::PhoneBook(void)
{
	PhoneBook::id = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact()
{
	std::string tmp;

	PhoneBook::contacts[id].setId(id);
	PhoneBook::contacts[id].setName(ask_input("Hello what's your name ?"));
	PhoneBook::contacts[id].setLastName(ask_input("What's your last name ?"));
	PhoneBook::contacts[id].setNick(ask_input("Do you have a nickname ?"));
	PhoneBook::contacts[id].setPhoneNumber(ask_input("Can I have your 06 ?"));
	PhoneBook::contacts[id].setDarkestSecret(ask_input("do you have a darkest secret ?"));
	id++;
}
