/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:48:18 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/07 12:01:40 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
	: _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";"; 
	std::cout << "created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";"; 
	std::cout << "closed" << std::endl;
	Account::_nbAccounts -= 1;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";"; 
	std::cout << "deposit:" << deposit << ";";
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";"; 
	Account::_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl; 
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";"; 
	if (this->_amount - withdrawal >= 0)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";"; 
		Account::_totalNbWithdrawals += 1;
		this->_nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl; 
		return (true);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount(void) const
{
	if (this->_amount > 0)
		return (true);
	else
		return (false);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";"; 
	std::cout << "deposits:" << this->_nbDeposits << ";"; 
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl; 
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);

	tm *ltm = localtime(&now);

	std::cout << "[";
	std::cout << std::setw (2) << std::setfill ('0') << 1900 + ltm->tm_year;
	std::cout << std::setw (2) << std::setfill ('0') << 1 + ltm->tm_mon;
	std::cout << std::setw (2) << std::setfill ('0') << ltm->tm_mday << "_";
	std::cout << std::setw (2) << std::setfill ('0') << ltm->tm_hour;
	std::cout << std::setw (2) << std::setfill ('0') << ltm->tm_min;
	std::cout << std::setw (2) << std::setfill ('0') << ltm->tm_sec;
	std::cout << "] ";

	//	std::cout << "[" << "19920104_091532" << "] ";
}

Account::Account(void)
	: _accountIndex(Account::_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";"; 
	std::cout << "created" << std::endl;
	Account::_nbAccounts += 1;
	return ;
}
