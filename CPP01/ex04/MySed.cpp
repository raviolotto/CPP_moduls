/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:01:33 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/11 10:58:40 by jacopo           ###   ########.fr       */
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

