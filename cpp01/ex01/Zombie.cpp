/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:11:31 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/10 12:50:01 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "\033[32m[" << this->_name << " Constructed]\033[0m" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "\033[32m[Unnamed Constructed]\033[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\033[35m[" << this->_name << " Deconstructed]\033[0m" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "\033[41m" << this->_name << "\033[0m : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
