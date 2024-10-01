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
	Bureaucrat carminuccio("carminuccio", 150);
	ShrubberyCreationForm leVele("test");
	ShrubberyCreationForm leVele2("hard");
	ShrubberyCreationForm leVele3(leVele2);
	std::cout << leVele3.getTarget() << std::endl;
	carmine.signForm(leVele);
	carmine.executeForm(leVele2);
	carmine.executeForm(leVele);
	carminuccio.signForm(leVele2);
	carmine.signForm(leVele2);
	carminuccio.executeForm(leVele2);


	return 0;
}
