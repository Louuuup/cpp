/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:54:30 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/19 15:46:06 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << name << " is ready to scav!!" << std::endl;
}

// Default destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " is gone (cant scav anymore, Rip in Peace)" << std::endl;
}

// Member functions
void ScavTrap::guardGate() {
	std::cout << getName() << " has entered in mode #GateKeep" << std::endl;
}
