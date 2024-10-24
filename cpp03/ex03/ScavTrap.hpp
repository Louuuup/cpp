/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:55:32 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/10/24 15:54:40 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(std::string name); // Default constructor
	ScavTrap(const ScavTrap &src); // Copy constructor
	ScavTrap &operator=(const ScavTrap &rhs); //Copy assignment operator
	~ScavTrap(); // Destructor
	
	void guardGate();
private:
	ScavTrap();
}	;

#endif