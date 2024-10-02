/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:35:40 by jcardina          #+#    #+#             */
/*   Updated: 2024/10/02 12:42:25 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& orig);
	Intern& operator=(const Intern& rhs);
	AForm* makeForm(std::string form_name, std::string target);
	~Intern();
};

#endif
