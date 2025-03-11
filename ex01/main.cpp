#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main(void)
{
	PhoneBook phoneBook;
	std::string tmp;

	while (1)
	{
		if (!std::cin.eof())
			std::cout << "SEARCH, ADD, EXIT" << std::endl;
		std::getline(std::cin, tmp);
		if (!std::cin.eof())
		{
			if (tmp == "SEARCH")
				phoneBook.showContacts();
			else if (tmp == "ADD")
				phoneBook.addContact();
			else if (tmp == "EXIT")
				return 0;
			else
				std::cout << "Unknown command ;(" << std::endl;
		}
		else
			return (1);
	}
}
