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


int main()
{
	AForm cheatcontract;
	std::cout << cheatcontract << std::endl;
	AForm contract("caterina", 72, 91);
	std::cout << contract << std::endl;

	Bureaucrat carmine("Carmine", 26);
	std::cout << carmine << std::endl;
	carmine.signForm(contract);
	std::cout << contract << std::endl;

	AForm contract2("Laila", 24, 150);
	carmine.signForm(contract2);
	std::cout << contract2 << std::endl;

	return 0;
}
