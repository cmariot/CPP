/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:48:18 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/04 14:40:30 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

// Get accessors

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
}

Account::Account(int initial_deposit)
	: _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbWithdrawals(0)
{
	std::cout << "Account constructor with initial deposit" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	return ;
}

Account::~Account(void)
{
	std::cout << "Account destructor" << std::endl;
	Account::_nbAccounts -= 1;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "Make Deposit" << std::endl;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "Make Withdrawal" << std::endl;
	Account::_totalAmount += withdrawal;
	return (true);
}

int		Account::checkAmount(void) const
{
	std::cout << "checkAmount" << std::endl;
	return (0);
}

void	Account::displayStatus(void) const
{
	std::cout << "displayStatus" << std::endl;
	std::cout << Account::_accountIndex;
	std::cout << Account::_amount;
	std::cout << Account::_nbDeposits;
	std::cout << Account::_nbWithdrawals;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::cout << "_displayTimestamp" << std::endl;

}

Account::Account(void)
{
	std::cout << "Account constructor without initial deposit" << std::endl;
	return ;
}
