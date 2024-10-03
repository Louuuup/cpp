/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:17:54 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/14 12:50:23 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "    \033[32m[HumanA (\033[0m" << this->_name << "\033[32m) Constructed]\033[0m" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "    \033[31m[HumanA (\033[0m" << this->_name << "\033[31m) Destructed]\033[0m" << std::endl;
}

void HumanA::attack(void) const
{
	std::cout << "\033[33m" << this->_name << "\033[0m attacks with his " << this->_weapon.getType() << std::endl;
}