/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:52:47 by jacopo            #+#    #+#             */
/*   Updated: 2024/09/26 16:02:52 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	Form cheatcontract;
	std::cout << cheatcontract << std::endl;
	Form contract("caterina", 72, 91);
	std::cout << contract << std::endl;

	Bureaucrat carmine("Carmine", 26);
	std::cout << carmine << std::endl;
	carmine.signForm(contract);
	std::cout << contract << std::endl;

	Form contract2("Laila", 24, 150);
	carmine.signForm(contract2);
	std::cout << contract2 << std::endl;

	return 0;
}
