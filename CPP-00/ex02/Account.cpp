/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:34:49 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/07 12:04:58 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// CONSTRUCTEUR ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_totalAmount += _amount;
	_nbAccounts += 1;
	
	return ;
}

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// DESTRUCTEUR /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
	return ;
}

////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////// GETTTER //////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////// SETTER ///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

bool Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawals:" << "refused" << std::endl;
		return (false);
	}
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawals:" << withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << ";amount:" << _amount;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;	
	return (true);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts(); 
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits += 1;
	_amount += deposit;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
}

int	Account::checkAmount() const
{
	if (_amount < 0)
		return (0);
	return (1);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t now;
	struct tm *local;

	now = 0;
	time(&now);
	local = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + local->tm_year;
	if (local->tm_mon < 9)
		std::cout << "0" << 1 + local->tm_mon;
	else
		std::cout << 1 + local->tm_mon;
	if (local->tm_mday < 10)
		std::cout << "0" << local->tm_mday;
	else
		std::cout << local->tm_mday;
	std::cout << "_";
	if (local->tm_hour < 10)
		std::cout << "0" << local->tm_hour;
	else
		std::cout << local->tm_hour;
	if (local->tm_min < 10)
		std::cout << "0" << 1 + local->tm_min;
	else
		std::cout << 1 + local->tm_min;
	if (local->tm_sec < 10)
		std::cout << "0" << 1 + local->tm_sec;
	else
		std::cout << 1 + local->tm_sec;
	std::cout << "] ";
}

///////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// CONSTRUCTEUR //////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

Account::Account()
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts += 1;
	return ;
}