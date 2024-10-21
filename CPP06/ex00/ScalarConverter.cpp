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

char ScalarConverter::_c;
int ScalarConverter::_i;
float ScalarConverter::_f;
double ScalarConverter::_d;

ScalarConverter::ScalarConverter(){

}

ScalarConverter::ScalarConverter(const ScalarConverter& orig){
	(void)orig;
}

ScalarConverter::~ScalarConverter(){

}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){
	(void)rhs;
	return(*this);
}


bool ScalarConverter::isInt(std::string str){
	char* end;
	errno = 0;
	long value = std::strtol(str.c_str(), &end, 10);
	if(*end == '\0' && errno == 0 && value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min()){
		_i = value;
		return true;
	}
	else
		return false;
}

bool ScalarConverter::isFloat(std::string str)
{
	char *end;
	errno = 0;
	float value = std::strtof(str.c_str(), &end);
	if(errno == 0){
		if(*end == 'f' && *(end + 1) == '\0'){
			_f = value;
			return true;
		}
		else
			return false;	
	}
	else
		return false;
}

bool ScalarConverter::isDouble(std::string str){
	 char *end;
	 errno = 0;
	 double value = std::strtod(str.c_str(), &end);
	 if(errno == 0 && *end == '\0'){
		_d = value;
		std::cout << "errno = " << errno << std::endl;
	 	return true;
	 }
	else
		return false;
}


void ScalarConverter::literalToType(int firstType)
{
	switch (firstType)
	{
	case 0 :
		std::cout << "is a char " << _c <<std::endl;
		break;
	case 1 :
		std::cout << "is an int " << _i <<std::endl;
		break;
	case 2 :
		std::cout << "is a float " << _f <<std::endl;
		break;
	case 3 :
		std::cout << "is a double " << _d <<std::endl;
		break;
	default:
		std::cout << "unknown type" <<std::endl;
		break;
	}
}

bool ScalarConverter::isChar(std::string str){
	if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])){
		_c = str[0];
		return true;
	}
	else
		return false;
}

void ScalarConverter::convert(std::string str){
	if (isChar(str)){
		_i = static_cast<int>(_c);
		_f = static_cast<float>(_c);
		_d = static_cast<double>(_c);
		literalToType(0);
	}
	else if (isInt(str)){
		_c = static_cast<char>(_i);
		_f = static_cast<float>(_i);
		_d = static_cast<double>(_i);
		literalToType(1);
	}
	else if (isFloat(str)){
		_c = static_cast<char>(_f);
		_i = static_cast<float>(_f);
		_d = static_cast<double>(_f);
		literalToType(2);
	}
	else if (isDouble(str)){
		_c = static_cast<char>(_d);
		_i = static_cast<float>(_d);
		_f = static_cast<double>(_d);
		literalToType(3);
	}
	else{
		std::cout << "errore conversione impossibile" << std::endl;
		return;
	}	
	std::cout << std::fixed << std::setprecision(1);
	if(std::isprint(_c))
		std::cout <<"char: " << _c << std::endl;
	else if((_d < 0 || _d > 255) || std::isnan(_d) || std::isinf(_d))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: not diplayable" << std::endl;
	if(_d > std::numeric_limits<int>::max() || _d < std::numeric_limits<int>::min() || std::isnan(_d) || std::isinf(_d))
		std::cout <<"int: impossible" << std::endl;
	else
		std::cout <<"int: " << _i << std::endl;
	if (_d > std::numeric_limits<float>::max() || _d < std::numeric_limits<float>::min())
		std::cout <<"float: impossible"<< "f" << std::endl;
	else
		std::cout <<"float: " << _f << "f" << std::endl;
	std::cout <<"double: " << _d << std::endl;
}