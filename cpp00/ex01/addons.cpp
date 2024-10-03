/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addons.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:09:42 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/01 12:26:40 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "addons.hpp"

static bool isAllWhitespace(const std::string &str) {
	return str.find_first_not_of(' ') == std::string::npos;
}

std::string	get_info(std::string prompt) {
	
	std::string input;
	std::cout << prompt;
	std::getline(std::cin, input);
	if (std::cin.eof())
		return "";
	if (input.empty() || isAllWhitespace(input))
		return get_info(prompt);
	return input;
}

int isNumber(const std::string &str) {
	
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return 0;
	}
	return 1;
}