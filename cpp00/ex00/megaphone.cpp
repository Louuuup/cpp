/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:10:18 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/04/30 13:26:04 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else 
	{
		std::string str;
		for (int i = 1; i < argc; i++)
		{
			str += std::string(argv[i]);\
			if (i < argc - 1)
				str += ' ';
		}
		for (size_t i = 0; i < str.length(); i++)
		{
			std::cout << (char)toupper(str[i]);
		}
		std::cout << std::endl;
	}
	return 0;
}