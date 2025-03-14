#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

// static init

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructeur, Destructeur

Account::Account( int deposit )
{
	_accountIndex = _nbAccounts;
	_amount = deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// display functions 

void Account::_displayTimestamp( void )
{
	std::time_t	t = std::time(NULL);
	std::tm		*now = std::localtime(&t);
	char		time[80];

	std::strftime(time, 80, "[19920104_091532] ", now);
	std::cout << time;
}
//%Y%m%d_%H%M%S
void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
		<< ";deposits:"<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

// money functions

void Account::makeDeposit( int deposit )
{
	int p_depo = _amount;

	if (deposit < 0)
		return ;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_depo << ";deposit:" << deposit
		<< ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawals )
{
	int	with = _amount;
	
	if (withdrawals < 0)
		return false;
	_displayTimestamp();
	if (_amount - withdrawals < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << with << ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	else 
	{
		_amount -= withdrawals;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawals;
		std::cout << "index:" << _accountIndex << ";p_amount:" << with << ";withdrawal:" << withdrawals
		<< ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}


// get

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}
