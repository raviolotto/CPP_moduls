/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:44:41 by jcardina          #+#    #+#             */
/*   Updated: 2024/10/02 13:42:15 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(){}

Intern::~Intern(){}

Intern& Intern::operator=(const Intern& src){
	(void)src;
	return(*this);
}

Intern::Intern(const Intern& src){
	*this = src;
}

AForm* Intern::makeForm(std::string form_name, std::string target){
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	AForm* ret =  NULL;
	while (i < 3 && forms[i].compare(form_name))
		i++;
	switch (i)
	{
		case	0:
			ret = new ShrubberyCreationForm(target);
			std::cout << "Intern create " << *ret <<std::endl;
			return (ret);
		case	1:
			ret = new RobotomyRequestForm(target);
			std::cout << "Intern create " << *ret <<std::endl;
			return (ret);
		case	2:
			ret = new PresidentialPardonForm(target);
			std::cout << "Intern create " << *ret <<std::endl;
			return (ret);
		default:
			std::cout << "this intern says, " << form_name << "is not in the archive" << std::endl;
	}
	return (ret);
}
