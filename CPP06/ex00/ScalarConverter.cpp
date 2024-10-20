/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-20 17:20:38 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-20 17:20:38 by raviolotto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){

}

ScalarConverter::ScalarConverter(const ScalarConverter& orig){

}

ScalarConverter::~ScalarConverter(){

}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){
	return(*this);
}


bool ScalarConverter::isInt(std::string str){
	char* end;
	errno = 0;
	long value = std::strtol(str.c_str(), &end, 10);
	return *end == '\0' && errno == 0 && value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min();
}

bool ScalarConverter::isFloat(std::string str)
{
	char *end;
	errno = 0;
	float value = std::strtof(str.c_str(), &end);
	if(errno == 0){
		if(*end == 'f' && *(end + 1) == '\0' && value <= std::numeric_limits<float>::max() && value >= std::numeric_limits<float>::min())
			return true;
		else if (*end == '\0')
			return true;	
	}
	else
		return false;
}

void ScalarConverter::convert(std::string str){
	if (str.size() == 1 && std::isprint(str[0]))
		convertChar(str[0]);
	else if (isInt(str))
		convertInt(str);
	else if (isFloat(str))
		convertFloat(str);
	else if (isDouble(str))
		convertDouble(str);
	else
		std::cout << "errore conversione impossibile" << std::endl ;
}