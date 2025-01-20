/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:24:33 by airodrig          #+#    #+#             */
/*   Updated: 2023/03/06 16:25:33 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void ) {
	// current date/time based on current system
	time_t now = time(0);
	tm *ltm = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", ltm);
	std::cout << buffer;
}

Account::Account(int initial_deposit){
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";created" << std::endl;
	return;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";closed" << std::endl;
	return;
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
	<< _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
	<< ";deposit:" << deposit << ";amount:";
	this->_amount += deposit;
	std::cout << this->_amount << ";nb_deposits:" << ++this->_nbDeposits << std::endl;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
	<< ";withdrawal:";
	if (this->_amount >= withdrawal) {
		this->_amount -= withdrawal;
		std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		return true;
	}
	std::cout << "refused" << std::endl;
	return false;
}

int Account::checkAmount(void) const {
	return this->_amount;
}

void Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" <<
	this->_nbWithdrawals << std::endl;
}

