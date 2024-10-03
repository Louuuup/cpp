/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:20:56 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/19 15:39:43 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0) {
	std::cout << this->_name << " joined the battle" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << this->_name << " left the battle" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
}

// Assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return *this;
}
// Member functions
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

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

void ClapTrap::setEnergyPoints(int energy_points) {
	this->_energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage) {
	this->_attack_damage = attack_damage;
}

void ClapTrap::setHitpoints(int hitpoints) {
	this->_hitpoints = hitpoints;
}

// Getters
std::string ClapTrap::getName() {
	return this->_name;
}

int ClapTrap::getHitpoints() {
	return this->_hitpoints;
}

int ClapTrap::getEnergyPoints() {
	return this->_energy_points;
}

int ClapTrap::getAttackDamage() {
	return this->_attack_damage;
}

void ClapTrap::displayStats() {
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hitpoints: " << this->_hitpoints << std::endl;
	std::cout << "Energy points: " << this->_energy_points << std::endl;
	std::cout << "Attack damage: " << this->_attack_damage << std::endl;
}