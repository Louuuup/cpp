/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:20:56 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/06/10 13:40:21 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0) {
	std::cout << this->_name << " joined the battle" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " left the battle" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energy_points < 1) {
		std::cout << this->_name << " is out of energy points! (no more ammo)" << std::endl;
		return ;
	}
	if (this->_hitpoints < 1) {
		std::cout << this->_name << " is dead! :/ (that means he cannot attack, duuh)" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << " for " \
		<< this->_attack_damage << " points of damage! (oof)" << std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitpoints < 1) {
		std::cout << this->_name << " is already dead! (please stop)" << std::endl;
		return ;
	}
	std::cout << this->_name << " takes " << amount << " points of damage! (ouch)" << std::endl;
	this->_hitpoints -= amount;
	if (this->_hitpoints < 1) {
		std::cout << this->_name << " died :/ (rip in peace)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points < 1) {
		std::cout << this->_name << " is out of energy points! (no repair for him)" << std::endl;
		return ;
	}
	if (this->_hitpoints < 1) {
		std::cout << this->_name << " is dead! (he can't repair himself if he aint alive bruh)" << std::endl;
		return ;
	}
	std::cout << this->_name << " is repaired for " << amount << " points of health! (youpidou)" << std::endl;
	this->_hitpoints += amount;
	this->_energy_points--;
}