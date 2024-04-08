/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:49:58 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/08 17:39:53 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	book[8];
	int		_lastindex;
	int		_forPrint;
	int		_lookingfor(void);

public:
	PhoneBook();
	void	addContact(void);
	void	printContacts(void);
	void	search(void);
	void	welcome(void);
	~PhoneBook();
};

#endif
