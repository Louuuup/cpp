/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:31:38 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/18 13:39:03 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	{
		ClapTrap claptrap("Claptrap");
		
		claptrap.attack("Bandit");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
	}
	{
		ScavTrap scavtrap("Scavtrap");

		scavtrap.guardGate();
		scavtrap.attack("Bandit");
		scavtrap.takeDamage(45);
		scavtrap.beRepaired(3);
		scavtrap.attack("Bandit");
		scavtrap.takeDamage(45);
		scavtrap.attack("Bandit");		
		
	}
	{
		FragTrap fragtrap("Fragtrap");

		fragtrap.highFivesGuys();
		fragtrap.attack("Bandit");
		fragtrap.takeDamage(45);
		fragtrap.beRepaired(30);
	}
}