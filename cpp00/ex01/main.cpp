/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:49:39 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/01 12:29:11 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	PhoneBook phonebook;
	std::string command;
	
	while (command != "EXIT")
	{
		command = get_info("Enter a command: ");
		if (command == "ADD")
		{
			phonebook.addContact();
		}
		else if (command == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (command == "")
		{
			break;
		}
		else if (command != "EXIT")
		{
			std::cout << command << ": \033[31mInvalid command\033[0m" << std::endl;
		}
	}
		std::cout << "Exiting..." << std::endl;

	return 0;
}