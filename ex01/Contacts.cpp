#include "Contacts.hpp"

void Contact::setname(std::string name)
{
	Contact::FirstName = name;
}

void Contact::setnick(std::string nickname)
{
	Contact::nickname = nickname;
}

void Contact::setlastname(std::string lastname)
{
	Contact::lastName = lastname;
}
