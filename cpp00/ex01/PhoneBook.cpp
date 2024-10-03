/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:29:28 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/01 12:22:35 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _maxContacts(8){
	
	this->nbContacts = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	
	return;
}


void    PhoneBook::addContact(void) {
	
	this->contact[nbContacts].setFirstName(get_info("First Name: "));
	this->contact[nbContacts].setLastName(get_info("Last Name: "));
	this->contact[nbContacts].setNickname(get_info("Nickname: "));
	this->contact[nbContacts].setPhoneNumber(get_info("Phone Number: "));
	this->contact[nbContacts].setDarkestSecret(get_info("Darkest Secret: "));
	
	this->nbContacts++;
	if (this->nbContacts == this->_maxContacts)
		this->nbContacts = 0;
	return;
}

void PhoneBook::searchContact(void) {

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Index| First Name|  Last Name|  Nickname" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < this->_maxContacts; i++)
	{
		std::cout << std::setw(4) << std::right << (i + 1) << " | ";
		std::cout << std::setw(9) << std::left<< this->contact[i].getFirstName() << " | ";
		std::cout << std::setw(9) << std::left<< this->contact[i].getLastName() << " | ";
		std::cout << std::setw(9) << std::left<< this->contact[i].getNickname() << " ";
		std::cout << std::endl;
	}	
	std::cout << "---------------------------------------------" << std::endl;
	std::string str = get_info("Enter contact index: ");
	if (isNumber(str) == 0)
	{
		std::cout << "\033[31mInvalid index\033[0m" << std::endl;
		return;
	}
	int idx = std::stoi(str);
	if (idx < 1 || idx > 8)
	{
		std::cout << "\033[31mInvalid index\033[0m" << std::endl;
		return;
	}
	contact[idx - 1].displayContact();
}