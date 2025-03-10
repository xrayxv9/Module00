#include "Contacts.hpp"

void Contact::setName(std::string name)
{
	Contact::firstName = name;
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

void Contact::setId(int id)
{
	Contact::id = id;
}

// get infos 
std::string Contact::getName()
{
	return(Contact::firstName);
}

std::string Contact::getNick()
{
	return(Contact::nickname);
}

std::string Contact::getLastName()
{
	return(Contact::lastName);
}

std::string Contact::getDarkestSecret()
{
	return(Contact::darkestSecret);
}

std::string Contact::getPhoneNumber()
{
	return(Contact::phoneNumber);
}

int Contact::getId()
{
	return(Contact::id);
}
