/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:13:26 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/10/24 15:54:59 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name); // Default constructor
	FragTrap(const FragTrap &src); // Copy constructor
	FragTrap &operator=(const FragTrap &rhs); //Copy assignment operator
	~FragTrap(); // Destructor
	
	void highFivesGuys(void);
private:
	FragTrap();
};




# endif