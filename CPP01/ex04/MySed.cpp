/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:01:33 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 21:50:15 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"
#include <iostream>
#include <fstream>
#include <string>

MySed::MySed(std::string name) : _inFile(name){
	this->_outFile = this->_inFile + ".replace";
}

MySed::~MySed()
{
}

void MySed::replace(std::string dafind, std::string replace)
{
	std::ifstream	file(this->_inFile.c_str());
	if(!file.is_open())
	{
		std::cout << "i can't open this file amo";
		return;
	}
	else
	{
		std::string frase;
		if(std::getline(file, frase, '\0')){
			std::ofstream file2(this->_outFile.c_str());
			size_t pos = frase.find(dafind);
			while(pos != std::string::npos)
			{
				frase.erase(pos, dafind.length());
				frase.insert(pos, replace);
				pos = frase.find(dafind);
			}
			file2 << frase;
			file2.close();
		}
		else
			std::cerr << "Empty file" << std::endl;
		file.close();
	}
}

// void MySed::replace(std::string dafind, std::string replace) {
//     std::ifstream inFile(this->_inFile.c_str());
//     if (!inFile.is_open()) {
//         std::cout << "Impossibile aprire il file" << std::endl;
//         return;
//     }

//     std::ofstream outFile(this->_outFile);
//     if (!outFile.is_open()) {
//         std::cout << "Impossibile creare il file di output" << std::endl;
//         return;
//     }

//     std::string line;
//     while (std::getline(inFile, line)) {
//         size_t pos = line.find(dafind);
//         while (pos != std::string::npos) {
//             line.replace(pos, dafind.length(), replace);
//             pos = line.find(dafind, pos + replace.length());
//         }
//         outFile << line << std::endl;
//     }

//     inFile.close();
//     outFile.close();
// }

