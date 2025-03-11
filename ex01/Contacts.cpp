#include "Contacts.hpp"

Contact::Contact(void)
{
	infos[0] = Contact::firstName;
	infos[1] = Contact::lastName;
	infos[2] = Contact::nickname;
	infos[3] = Contact::phoneNumber;
	infos[4] = Contact::darkestSecret;
	id = 0;
}

Contact::~Contact(void)
{
	return;
}

void Contact::setName(std::string name)
{
	Contact::firstName = name;
}

void Contact::setId(int id)
{
	Contact::id = id;
}

void Contact::setNick(std::string nickname)
{
	Contact::nickname = nickname;
}

void Contact::setLastName(std::string lastname)
{
	Contact::lastName = lastname;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	Contact::darkestSecret = darkestSecret;
}

void Contact::setPhoneNumber(std::string phone)
{
	Contact::phoneNumber = phone;
}

// get infos 
std::string Contact::getName()
{
	return(infos[0]);
}

std::string Contact::getLastName()
{
	return(infos[1]);
}

std::string Contact::getNick()
{
	return(infos[2]);
}

std::string Contact::getPhoneNumber()
{
	return(infos[3]);
}

std::string Contact::getDarkestSecret()
{
	return(infos[4]);
}

int Contact::getId()
{
	return(id);
}
