/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 00:09:08 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/06 13:40:07 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp(void)
{
	std::time_t	seconds;

	std::time(&seconds);
		std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&seconds)->tm_year
				<< std::setw(2) << 1 + std::localtime(&seconds)->tm_mon
				<<  std::setw(2) << std::localtime(&seconds)->tm_mday
				<<  "_"
				<<  std::setw(2) << std::localtime(&seconds)->tm_hour
				<<  std::setw(2) << std::localtime(&seconds)->tm_min
				<<  std::setw(2) << std::localtime(&seconds)->tm_sec
				<< "] " << std::flush;
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts -1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" <<std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" <<std::endl;
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

int	Account::checkAmount( void ) const {
	return _amount;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
				<< ";amount:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "accounts:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits ++;
	_totalNbDeposits ++;
	_totalAmount += deposit;
	std::cout << "accounts:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit
				<< ";amount:" << (_amount + deposit)
				<< ";nb_deposit:" << _nbDeposits
				<< std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount << ";"
                << "withdrawal:";
    if (withdrawal > checkAmount()) {
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << ";";
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";"
                << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

