/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:50:01 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/14 12:50:34 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "    \033[32m[Weapon (\033[0m" << this->_type << "\033[32m) Constructed]\033[0m" << std::endl;
}

Weapon::Weapon()
{
	std::cout << "    \033[32m[Weapon (\033[0mDefault\033[32m) Constructed]\033[0m" << std::endl;
	
}

Weapon::~Weapon()
{
	std::cout << "    \033[31m[Weapon (\033[0m" << this->_type << "\033[31m) Destructed]\033[0m" << std::endl;
}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
