/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:31:38 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/19 12:29:14 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	{
		ClapTrap claptrap("Claptrap");
		
		claptrap.displayStats();
		claptrap.attack("Bandit");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
	}
	std::cout << std::endl;
	{
		ScavTrap scavtrap("Scavtrap");
		
		scavtrap.displayStats();
		scavtrap.guardGate();
		scavtrap.attack("Bandit");
		scavtrap.takeDamage(45);
		scavtrap.beRepaired(3);
		scavtrap.attack("Bandit");
		scavtrap.takeDamage(45);
		scavtrap.attack("Bandit");		
		
	}
	std::cout << std::endl;
	{
		FragTrap fragtrap("Fragtrap");

		fragtrap.displayStats();
		fragtrap.highFivesGuys();
		fragtrap.attack("Bandit");
		fragtrap.takeDamage(45);
		fragtrap.beRepaired(30);
	}
	std::cout << std::endl;
	{
		DiamondTrap diamondtrap("Diamondtrap");

		diamondtrap.displayStats();
		diamondtrap.highFivesGuys();
		diamondtrap.guardGate();
		diamondtrap.attack("Bandit");
		diamondtrap.takeDamage(45);
		diamondtrap.beRepaired(30);
	}
}