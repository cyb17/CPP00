/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:06:35 by yachen            #+#    #+#             */
/*   Updated: 2024/02/01 14:42:33 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_nbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << _nbAccounts << std::endl;
	std::cout << _totalAmount << std::endl;
	std::cout << _totalNbDeposits << std::endl;
	std::cout << _totalNbWithdrawals << std::endl;
}

Account::Account( void )
{
}

Account::Account( int initial_deposit) : _nbDeposits(initial_deposit) 
{
}

Account::~Account( void )
{
}

void	Account::makeDeposit( int deposit )
{
	_amount = deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (checkAmount() < withdrawal)
		return (0);
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals += _nbWithdrawals;
	return (1);
}

int	Account::	checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << _accountIndex << std::endl;
}

void	Account::_displayTimestamp( void )
{
}