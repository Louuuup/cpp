/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:53:44 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/14 15:58:31 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	return;
}

Harl::~Harl() {
	return;
}

void Harl::debug() {
	std::cout << HARL << "Here I am, debuging once again..." << std::endl;
}

void Harl::info() {
	std::cout << HARL << "Just so you know, I'm here to inform you." << std::endl;
}

void Harl::warning() {
	std::cout << HARL << "Warning, something is happening." << std::endl;
}

void Harl::error() {
	std::cout << HARL << "Error, something is really really wrong. :o" << std::endl;
}


void Harl::complain(std::string level) {
	void (Harl::*fct[4])()= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*fct[i])();
			return;
		}
	}
}