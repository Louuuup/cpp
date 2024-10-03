/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:51:58 by ycyr-roy          #+#    #+#             */
/*   Updated: 2024/05/14 14:50:21 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}
	std::string s1, s2;
	std::string fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty()) {
		std::cout << "Error: Empty string" << std::endl;
		return 1;
	}
	std::ifstream file(fileName);
	if (!file.is_open()) {
		std::cout << "Error: File not found" << std::endl;
		return 1;
	}
	if (s1 == s2) {
		std::cout << "Error: Strings are the same" << std::endl;
		return 1;
	}
	std::string line;
	std::string oldFile;
	std::string newFileName = fileName + ".replace";
	std::ofstream newFile(newFileName);
	if (!newFile.is_open()) {
		std::cout << "Error: Could not create new file" << std::endl;
		return 1;
	}
	
	while (std::getline(file, line)) {
		while (line.find(s1) != std::string::npos) {
			size_t pos = line.find(s1);
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			
		}
		oldFile += line + "\n";
	}
	newFile << oldFile;
	file.close();
	newFile.close();	
}
