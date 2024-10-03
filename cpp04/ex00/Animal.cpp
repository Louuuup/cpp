/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:15:19 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/19 14:15:20 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	// Default constructor implementation
}

Animal::Animal(const Animal &src) {
	// Copy constructor implementation
	*this = src;
}

Animal &Animal::operator=(const Animal &other) {
	// Copy assignment operator implementation
	if (this != &other) {
		// Copy member variables from other to this
	}
	return *this;
}

Animal::~Animal() {
	// Destructor implementation
}