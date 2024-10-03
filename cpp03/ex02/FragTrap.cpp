/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:33 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/18 13:26:11 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << name << " is ready to frag" << std::endl;
}

// Default destructor
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " is gone and cannot frag anymore" << std::endl;
}

// Member functions
void FragTrap::highFivesGuys() {
	std::cout << getName() << " is asking for a high five!" << std::endl;
}

