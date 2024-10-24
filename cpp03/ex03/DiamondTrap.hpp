/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:42:01 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/10/24 15:52:37 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(std::string name); // Default constructor
		~DiamondTrap(); // Destructor
		DiamondTrap(const DiamondTrap &src); // Copy constructor
		DiamondTrap &operator=(const DiamondTrap &src); //Copy assignment operator
		
		void whoAmI();
	private:
		std::string _name;
};



#endif