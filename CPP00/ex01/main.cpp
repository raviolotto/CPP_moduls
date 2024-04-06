/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:11:35 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/05 20:55:22 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void) {
	PhoneBook book;
	std::string input = "";
	book.welcome();
	while (input.compare("EXIT")) {
		if (input.compare("ADD") == 0)
		book.addContact();
		else if (input.compare("SEARCH") == 0) {
			book.printContacts();
			book.search();
		}
		std::cout << "> " << std::flush;
		std::cin >> input;
	}
	return 0;
}
