/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   people.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:37:37 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/02 18:29:43 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEOPLE_HPP
# define PEOPLE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	number;
		std::string	darkestsecret;

	public:
		Contact();
		std::string	get_fname();
		std::string	get_lname();
		std::string	get_nickname();
		std::string	get_number();
		std::string	get_darkestsecret();
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nickname(std::string str);
		void		set_number(std::string str);
		void		set_darkestsecret(std::string str);
};


#endif
