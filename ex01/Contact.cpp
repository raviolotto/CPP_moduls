/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:52:04 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/04 18:51:26 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::contact(void)
{
}

Contact::~contact(void)
{
}

Contact::get_fname(void)
{
	return(this->_fname);
}

Contact::get_lname(void)
{
	return(this->_lname);
}

Contact::get_nickname(void)
{
	return(this->_number);
}

Contact::get_darkestSecret(void)
{
	return(this->_darkestSecret);
}

Contact::set_value(std::string str)
{
	std::string value = "";
	std::cout <<str <<std::endl;

	std::getline = (std::cin, value);
	if (!value.empty)
	{
		
	}
}







