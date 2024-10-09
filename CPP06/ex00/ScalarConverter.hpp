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

class ScalarConverter
{
	private:

	public:
		static void convert(std::string str);
		ScalarConverter();
		ScalarConverter(const ScalarConverter& orig);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& rhs);
};

#endif
