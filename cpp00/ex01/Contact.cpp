/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:33:39 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/01 12:18:01 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	
	return;
}

Contact::~Contact(void) {
	
	return;
}

void	Contact::setFirstName(std::string input) {
	
	this->firstName = input;
	return;
}

void	Contact::setLastName(std::string input) {
	
	this->lastName = input;
	return;
}

void   Contact::setNickname(std::string input) {
	
	this->nickname = input;
	return;
}

void   Contact::setPhoneNumber(std::string input) {
	
	this->phone_number = input;
	return;
}

void   Contact::setDarkestSecret(std::string input) {
	
	this->darkestSecret = input;
	return;
}

std::string Contact::getFirstName(void) {
	
	std::string str = this->firstName;
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return str;
}

std::string Contact::getLastName(void) {
	
	std::string str = this->lastName;
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return str;
}

std::string Contact::getNickname(void) {
	
	std::string str = this->nickname;
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return str;
}


void	Contact::displayContact(void) const {

	if (this->firstName.empty() && this->lastName.empty() && this->nickname.empty() && this->phone_number.empty() && this->darkestSecret.empty())
	{
		std::cout << "\033[31mNo contact found\033[0m" << std::endl;
		return;
	}
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
	return;
}