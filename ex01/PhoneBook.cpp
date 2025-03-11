#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
	id = 0;
	full = false;
	questions[0] = "Hello, what's your name ?";
	questions[1] = "What's your last name ?";
	questions[2] = "Do you have a nickname ?";
	questions[3] = "What's your phone number";
	questions[4] = "What's your darkest secret ?";
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	checkNumbers(std::string tmp)
{
	int count = 0;
	// I should check if the number is good or not
	for (int i = 0; tmp[i]; i++)
	{
		if ()
	}
}

void	PhoneBook::addContact()
{
	std::string tmp;
	std::string list[5];

	for (int i = 0; i < 5;i++)
	{
		std::cout << PhoneBook::questions[i] << std::endl;
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			return ;
		if (tmp.empty())
		{
			std::cout << "Null line are not accepted" << std::endl;
			return ;
		}
		if (i == 3 && !checkNumbers(tmp))
			return ;
		list[i] = tmp;
	}
	contacts[id].setId(id);
	for (int i = 0; i < 5; i++)
		contacts[id].infos[i] = list[i];
	id++;
	if (id == 8)
	{
		full = true;
		id = 0;
	}
}

void	showHeader(void)
{
	std::cout << "╭──────────┬──────────┬──────────┬──────────╮" << std::endl;
	std::cout << "│    index │      name│  LastName│  nickName│" << std::endl;
}

void	PhoneBook::showContact(int toShow)
{
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	std::cout << "│" << std::setw(10) << std::setfill(' ') << contacts[toShow].getId() << "│";
	for (int i = 0; i < 3; i++)
	{
		if (contacts[toShow].getName() != contacts[toShow].getName().substr(0, 9))
			std::cout << std::setw(9) << std::setfill(' ') << contacts[toShow].infos[i].substr(0,9) << "." << "│";
		else
			std::cout << std::setw(10) << std::setfill(' ') << contacts[toShow].infos[i].substr(0,9) << "│";
	}
	std::cout << std::endl;
}

void	showBot(void)
{
	std::cout << "╰──────────┴──────────┴──────────┴──────────╯" << std::endl;
}

void	PhoneBook::showContacts(void)
{
	int			length;
	std::string	tmp;
	int			nbr;

	if (full)
		length = 8;
	else
		length = id;
	showHeader();
	for (int i = 0; i < length; i++)
		showContact(i);
	showBot();
	std::cout << "Which one do you want to see ?" << std::endl;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		return ;
	if (tmp.empty())
	{
		if (id > 0 || full)
			nbr = 0;
		else
		{
			std::cout << "please at least init the first value before entering an empty line" << std::endl;
			return ;
		}
	}
	else
		nbr = std::atoi(tmp.c_str());
	if ((nbr >= id && !full) || (nbr > 7 && full))
	{
		std::cout << "The number isn't in the tab" << std::endl;
		return ;
	}
	std::cout << "here is the number : " << id << std::endl;
	std::cout << "the name of the person you are searching for is : " << contacts[nbr].getName() << std::endl;
	std::cout << "the Last name of the person you are searching for is : " << contacts[nbr].getLastName() << std::endl;
	std::cout << "the nickname of the person you are searching for is : " << contacts[nbr].getNick() << std::endl;
	std::cout << "the Phone Number of the person you are searching for is : " << contacts[nbr].getPhoneNumber() << std::endl;
	std::cout << "the Darkest secret of the person you are searching for is : " << contacts[nbr].getDarkestSecret() << std::endl;

}
