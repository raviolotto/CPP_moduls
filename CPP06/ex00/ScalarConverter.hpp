/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:39:57 by jcardina          #+#    #+#             */
/*   Updated: 2024/10/09 10:59:09 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cerrno>
#include <cstdlib>
#include <iomanip>
#include <cmath>

class ScalarConverter
{
	private:
		static char		_c;
		static int		_i;
		static float	_f;
		static double	_d;
		ScalarConverter();
		ScalarConverter(const ScalarConverter& orig);
	public:
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& rhs);
		static void convert(std::string str);
		static void literalToType(int firstType);
		static bool isChar(std::string str);
		static bool isInt(std::string str);
		static bool isFloat(std::string str);
		static bool isDouble(std::string str);
};

#endif
