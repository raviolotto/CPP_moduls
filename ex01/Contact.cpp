/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:52:04 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/05 20:33:34 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_fname()
{
	return(this->_fname);
}

std::string Contact::get_lname()
{
	return(this->_lname);
}

std::string Contact::get_nickname()
{
	return(this->_number);
}

std::string Contact::get_darkestsecret()
{
	return(this->_darkestsecret);
}

std::string Contact::set_value(std::string str)
{
	std::string value = "";
	bool	good = false;

	do
	{
		std::cout <<str <<std::endl;
		std::getline(std::cin, value);
		if (std::cin.good() && !value.empty())
			good = true;
		else
		{
			std::cin.clear();
			std::cout << "bad input give me another one" << std::endl;
		}
	}while (!good);
	return (value);
}

void Contact::init(int i)
{
	this->index = i;
	this->_fname = this->set_value("insert your name");
	this->_lname = this->set_value("insert your last name");
	this->_nickname = this->set_value("insert nickname pls");
	this->_number = this->set_value("insert your number");
	this->_darkestsecret = this->set_value("confess your secret pls");
	std::cout << std::endl;
}


std::string Contact::print_len(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::print(void)
{
	std::cout << "|" << std::left << std::setw(10) << this->index;
	std::cout << "|" << std::left << std::setw(10) << this->print_len(this->_fname);
	std::cout << "|" << std::left << std::setw(10) << this->print_len(this->_lname);
	std::cout << "|" << std::left << std::setw(10) << this->print_len(this->_nickname);
	std::cout << "|" << std::left << std::setw(10) << this->print_len(this->_number);
	std::cout << "|" << std::left << std::setw(10) << this->print_len(this->_darkestsecret);
	std::cout << "|" << std::endl;
}







