/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:33:17 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/04/30 15:03:05 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
#include <string>

class Contact {

private :

	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkestSecret;
public :

	Contact(void);
	~Contact(void);

	void		setFirstName(std::string input);
	void		setLastName(std::string input);
	void		setNickname(std::string input);
	void		setPhoneNumber(std::string input);
	void		setDarkestSecret(std::string input);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	void		displayContact(void) const;
} ;

#endif