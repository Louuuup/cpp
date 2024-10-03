/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:29:17 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/01 10:29:02 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
# include "addons.hpp"

class PhoneBook {
private :
	Contact contact[8];
	const int	_maxContacts;
	int nbContacts;

public :
	
	PhoneBook(void);
	~PhoneBook(void);

	void    addContact(void);
	void    searchContact(void);
} ;

#endif