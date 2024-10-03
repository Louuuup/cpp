/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:25:15 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/14 12:50:41 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "    \033[32m[HumanB (\033[0m" << this->_name << "\033[32m) Constructed]\033[0m" << std::endl;
}


HumanB::~HumanB() {
	std::cout << "    \033[31m[HumanB (\033[0m" << this->_name << "\033[31m) Destructed]\033[0m" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	std::cout << "\033[33m" << this->_name << "\033[0m picked up a " << this->_weapon->getType() << std::endl;
}

void HumanB::attack() {
	std::cout << "\033[33m" << this->_name << "\033[0m attacks with his " << this->_weapon->getType() << std::endl;
}