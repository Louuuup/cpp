/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:13:06 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/06/10 12:50:03 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor
Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called" << std::endl;

}
//Int constructor
Fixed::Fixed(int const value) {
	// std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_bits;
}
//Float constructor
Fixed::Fixed(float const value) {
	// std::cout << "Float constructor called" << std::endl;
	
	this->_value = roundf(value * (1 << this->_bits));
}
//Copy constructor
Fixed::Fixed(const Fixed &src) {
	// std::cout << "Copy constructor called" << std::endl;
	
	*this = src;
}
//Destructor
Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}
//toFloat method
float Fixed::toFloat(void) const {
	return (float)this->_value / (1 << this->_bits);
}
//toInt method
int Fixed::toInt(void) const {
	return this->_value >> this->_bits;
}
//setRawBits and getRawBits methods
void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}
int Fixed::getRawBits(void) const {
	return this->_value;
}
//Pre-increment operator overload
Fixed &Fixed::operator++(void) {
	this->_value++;
	return *this;
}
//Post-increment operator overload
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}
//Pre-decrement operator overload
Fixed &Fixed::operator--(void) {
	this->_value--;
	return *this;
}
//Post-decrement operator overload
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}
//Comparison operator overloads
bool Fixed::operator>(const Fixed &src) const {
	return this->_value > src.getRawBits();
}
bool Fixed::operator<(const Fixed &src) const {
	return this->_value < src.getRawBits();
}
bool Fixed::operator>=(const Fixed &src) const {
	return this->_value >= src.getRawBits();
}
bool Fixed::operator<=(const Fixed &src) const {
	return this->_value <= src.getRawBits();
}
bool Fixed::operator==(const Fixed &src) const {
	return this->_value == src.getRawBits();
}
bool Fixed::operator!=(const Fixed &src) const {
	return this->_value != src.getRawBits();
}
//Arithmetic operator overloads
Fixed Fixed::operator+(const Fixed &src) const {
	return Fixed(this->toFloat() + src.toFloat());
}
Fixed Fixed::operator-(const Fixed &src) const {
	return Fixed(this->toFloat() - src.toFloat());
}
Fixed Fixed::operator*(const Fixed &src) const {
	return Fixed(this->toFloat() * src.toFloat());
}
Fixed Fixed::operator/(const Fixed &src) const {
	return Fixed(this->toFloat() / src.toFloat());
}
//Min and max methods
Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}

//Assignment operator overload
Fixed &Fixed::operator=(const Fixed &src) {
	// std::cout << "Assignation operator called" << std::endl;
	
	this->_value = src.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &src) {
	o << src.toFloat();
	return o;
}
