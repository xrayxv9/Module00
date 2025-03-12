#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

Account::Account()
{
	return;
}

Account::~Account()
{
	return;
}


void Account::_displayTimestamp( void )
{
	std::time_t	t = std::time(NULL);
	std::tm*	now = std::localtime(&t);
	std::cout << "[" << std::put_time(now, "%Y%m%d_%H%M%S") << std::endl;
}
