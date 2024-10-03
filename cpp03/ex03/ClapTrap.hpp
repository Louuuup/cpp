/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:09:58 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/19 15:39:58 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	
public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &src);
	ClapTrap &operator=(const ClapTrap &src);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
// Setters
	void setName(std::string name);
	void setHitpoints(int hitpoints);
	void setEnergyPoints(int energy_points);
	void setAttackDamage(int attack_damage);
// Getters
	std::string getName();
	int getHitpoints();
	int getEnergyPoints();
	int getAttackDamage();
	void displayStats();
private:
	std::string _name;
	int _hitpoints;
	int _energy_points;
	int _attack_damage;
} ;

# endif