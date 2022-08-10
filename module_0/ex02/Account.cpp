#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_nbDeposits++;
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << checkAmount() - deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
		_amount = _amount - withdrawal;
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount + withdrawal;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << checkAmount();
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << checkAmount();
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	std::time_t	curr_time = std::time(NULL);
	std::tm		*time_now = std::localtime(&curr_time);
	std::cout << "[";
	std::cout << time_now->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << time_now->tm_mday;
	std::cout << "_";
	std::cout << time_now->tm_hour;
	std::cout << time_now->tm_min;
	std::cout << time_now->tm_sec;
	std::cout << "] ";
}
