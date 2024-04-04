/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:37:37 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/04 18:47:03 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string	_fname;
	std::string	_lname;
	std::string	_nickname;
	std::string	_number;
	std::string	_darkestsecret;
	int			index;

	std::string	get_fname();
	std::string	get_lname();
	std::string	get_nickname();
	std::string	get_number();
	std::string	get_darkestsecret();
	void		set_value(std::string str);

public:
	Contact();
	void	init(void);
	~Contact();
};


#endif
