/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:11:02 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 14:11:03 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

#define WHITE "\e[39m"
#define BLUE "\e[36m"

//Static initialisation
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


//Timestamp
void	Account::_displayTimestamp(){
	char 		buf[80];
	std::time_t	now;
	std::tm*	tInfo;

	std::time(&now);
	tInfo = std::localtime(&now);
	std::strftime(buf, 80, "%Y%m%d_%H%M%S",tInfo);
	std::cout << "[" << buf << "] ";
}

//Constructor and destructor
Account::Account(int initial_deposit) : _amount(initial_deposit){
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << WHITE;
	std::cout << ";amount:" << BLUE << _amount << WHITE;
	std::cout << ";created" << std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << WHITE;
	std::cout << ";amount:" << BLUE << _amount << WHITE;
	std::cout << ";closed" << std::endl;
}

//Getter
int Account::getNbAccounts(){
	return Account::_nbAccounts;
}

int Account::getTotalAmount(){
	return Account::_totalAmount;
}

int Account::getNbDeposits(){
	return Account::_totalNbDeposits;
}

//Display infos
void Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "accounts:" << BLUE << _nbAccounts << WHITE;
	std::cout << ";total:" << BLUE << _totalAmount << WHITE;
	std::cout << ";deposits:" << BLUE << _totalNbDeposits << WHITE;
	std::cout << ";withdrawals" << BLUE << _totalNbWithdrawals << WHITE << std::endl;
}

void Account::displayStatus() const{
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << WHITE;
	std::cout << ";amount:" << BLUE << _amount << WHITE;
	std::cout << ";deposits:" << BLUE << _nbDeposits << WHITE;
	std::cout << ";withdrawals:" << BLUE << _nbWithdrawals << WHITE << std::endl;
}

void	Account::makeDeposit(int deposit)	{
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << WHITE;
	std::cout << ";p_amount:" << BLUE << _amount << WHITE;
	std::cout << ";deposit:" << BLUE << deposit << WHITE;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << BLUE << _amount << WHITE;
	std::cout << ";nb_deposits:" << BLUE << _nbDeposits << WHITE << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << WHITE;
	std::cout << ";p_amount:" << BLUE << _amount << WHITE;
	if (_amount - withdrawal >= 0)	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << BLUE << withdrawal << WHITE;
		std::cout << ";amount:" << BLUE << _amount << WHITE;
		std::cout << ";nb_withdrawals:" << BLUE << _nbWithdrawals << WHITE<< std::endl;
		return true;
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return false;
}