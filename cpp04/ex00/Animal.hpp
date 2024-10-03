/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:15:41 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/09/19 14:15:46 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal {
public:
	Animal(); // Default constructor
	Animal(const Animal &src); // Copy constructor
	Animal &operator=(const Animal &other); // Copy assignment operator
	~Animal(); // Destructor
private:
	// Add member variables here
};

#endif // Animal_HPP