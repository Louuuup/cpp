/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:09:43 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/06/10 13:39:51 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	{
		ClapTrap claptrap("Claptrap");
		
		claptrap.attack("Bandit");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
	}
	std::cout << std::endl;
	{
		ClapTrap claptrap("ClaptrapV2");
		
		claptrap.takeDamage(5);
		claptrap.attack("Bandit");
		claptrap.beRepaired(3);
		claptrap.takeDamage(5);
		claptrap.attack("Bandit");
		claptrap.takeDamage(4);
		claptrap.attack("Bandite");
		claptrap.beRepaired(3);
		claptrap.attack("Bandite");
		claptrap.takeDamage(5);
	}
	std::cout << std::endl;
	{
		ClapTrap claptrap("ClaptrapV3");
		
		claptrap.attack("Bandit");
		claptrap.beRepaired(3);
		claptrap.attack("Bandite");
		claptrap.attack("Bandita");
		claptrap.attack("Bandito");
		claptrap.attack("Banditu");
		claptrap.attack("Banditaaa");
		claptrap.attack("Bandi");
		claptrap.attack("Bando");
		claptrap.attack("Bandeau");
		claptrap.attack("Bandana");
		claptrap.attack("Banana");
	}
}
