/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:55:11 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 21:12:30 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
#define MYSED_HPP

#include <iostream>
#include <string>
#include <fstream>

class MySed
{
private:
	std::string	_inFile;
	std::string	_outFile;

public:
	MySed(std::string name);
	~MySed();

	void	replace(std::string s1, std::string s2);
};


#endif
