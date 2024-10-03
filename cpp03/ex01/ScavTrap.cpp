/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:54:30 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/18 11:47:26 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	// std::cout << "ScavTrap " << name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap() {
	// std::cout << "ScavTrap " << getName() << " is gone" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << getName() << " has entered in mode #GateKeep" << std::endl;
}
