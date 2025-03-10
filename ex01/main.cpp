#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook phoneBook;

	phoneBook.add_contact();
	std::cout << "here is the name : " << phoneBook.contacts[0].getName() << std::endl;
}


