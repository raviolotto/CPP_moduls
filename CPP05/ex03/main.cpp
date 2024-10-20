/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:52:47 by jacopo            #+#    #+#             */
/*   Updated: 2024/10/02 13:45:36 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

	Bureaucrat carmine("Carmine", 26);
	Bureaucrat carminuccio("carminuccio", 150);
	ShrubberyCreationForm leVele("test");
	ShrubberyCreationForm leVele2("hard");
	ShrubberyCreationForm leVele3(leVele2);

	std::cout << "-----test shrubbery-----" << std::endl;
	std::cout << leVele << std::endl;
	std::cout << leVele3.getTarget() << std::endl;
	leVele3 = leVele;
	std::cout << leVele3.getTarget() << std::endl;
	carmine.signForm(leVele);
	carmine.executeForm(leVele2);
	carmine.executeForm(leVele);
	carminuccio.signForm(leVele2);
	carmine.signForm(leVele2);
	carminuccio.executeForm(leVele2);
	std::cout << "-----end test shrubbery-----" << std::endl << std::endl;

	std::cout << "-----test robotomy-----" << std::endl;
	RobotomyRequestForm lobotomy("ken");
	carmine.executeForm(lobotomy);
	carmine.signForm(lobotomy);
	carmine.executeForm(lobotomy);
	carmine.executeForm(lobotomy);
	std::cout << "-----end test robotomy-----" << std::endl << std::endl;

	std::cout << "-----test presidential-----" << std::endl;
	PresidentialPardonForm andreotti("pDaddy");
	carmine.signForm(andreotti);
	Bureaucrat bossCarmine("bossCarmine", 1);
	bossCarmine.signForm(andreotti);
	bossCarmine.executeForm(andreotti);
	std::cout << "-----test presidential-----" << std::endl;


	    std::cout << "-----test intern-----" << std::endl;
    Intern someRandomIntern;
    AForm* form1;
    AForm* form2;
    AForm* form3;

    form1 = someRandomIntern.makeForm("shrubbery creation", "home");
    if (form1) {
        carmine.signForm(*form1);
        carmine.executeForm(*form1);
        delete form1;
    }

    form2 = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form2) {
        carmine.signForm(*form2);
        carmine.executeForm(*form2);
        delete form2;
    }

    form3 = someRandomIntern.makeForm("presidential pardon", "Fry");
    if (form3) {
        bossCarmine.signForm(*form3);
        bossCarmine.executeForm(*form3);
        delete form3;
    }

    std::cout << "-----end test intern-----" << std::endl;
	return 0;
}
