/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:41:29 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/19 12:30:05 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	
	this->_name = name;
	this->ClapTrap::setHitpoints(this->FragTrap::getHitpoints());
	this->ClapTrap::setEnergyPoints(this->ScavTrap::getEnergyPoints());
	this->ClapTrap::setAttackDamage(this->FragTrap::getAttackDamage());
	std::cout << "DiamondTrap " << name << " is ready to frag and guard" << std::endl;
	
}

// Destructor
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " is out of the game" << std::endl;
}

// Member functions
void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}