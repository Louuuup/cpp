/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:12:44 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/06/03 13:00:10 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(const Fixed &src);
		~Fixed();
		Fixed &operator=(const Fixed &src);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator<<(int const value);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _value;
		static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif