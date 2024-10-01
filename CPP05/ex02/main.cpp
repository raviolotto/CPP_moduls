/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:52:47 by jacopo            #+#    #+#             */
/*   Updated: 2024/10/01 13:01:52 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	Bureaucrat carmine("Carmine", 26);
	ShrubberyCreationForm leVele("test");
	std::cout << leVele << std::endl;
	std::cout << carmine << std::endl;
	carmine.signForm(leVele);
	std::cout << leVele << std::endl;
	carmine.executeForm(leVele);








	return 0;
}
