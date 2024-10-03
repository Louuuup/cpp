/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:13:06 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/06/03 13:01:15 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;

}
//Int constructor
Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_bits;
}
//Float constructor
Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	
	this->_value = roundf(value * (1 << this->_bits));
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
//toFloat method
float Fixed::toFloat(void) const {
	return (float)this->_value / (1 << this->_bits);
}
//toInt method
int Fixed::toInt(void) const {
	return this->_value >> this->_bits;
}
void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}
int Fixed::getRawBits(void) const {
	return this->_value;
}
//Assignment operator overload
Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;
	
	this->_value = src.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &src) {
	o << src.toFloat();
	return o;
}
