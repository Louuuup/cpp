/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:09:58 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/10/24 15:50:35 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	
public:
	ClapTrap(std::string name); // Default constructor
	ClapTrap(const ClapTrap &src); // Copy constructor
	ClapTrap &operator=(const ClapTrap &other); // Copy assignment operator
	~ClapTrap(); // Destructor
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	std::string _name;
	int _hitpoints;
	int _energy_points;
	int _attack_damage;
} ;

# endif