/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:13:06 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/24 13:44:43 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;

}
//Copy constructor
Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
}
//Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

//Assignation operator overload
Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;

	this->_value = src.getRawBits();
	return *this;
}
