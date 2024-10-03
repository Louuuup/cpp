/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:59:40 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/14 16:08:18 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	Harl harl;

	if (ac != 2) {
		std::cout << "Usage: ./HarlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 1;
	}
	if ((std::string(av[1]) != "DEBUG") && (std::string(av[1]) != "INFO") && (std::string(av[1]) != "WARNING") && (std::string(av[1]) != "ERROR")) {
		std::cout << HARL << "I nothing to say about this. Give me something real" << std::endl;
		return 1;
	}
	switch (av[1][0]) {
		case 'D':
			harl.complain("DEBUG");
		case 'I':
			harl.complain("INFO");
		case 'W':
			harl.complain("WARNING");
		case 'E':
			harl.complain("ERROR");
	}
	return 0;
}