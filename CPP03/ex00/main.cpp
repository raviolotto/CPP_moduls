/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:36:50 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/10 12:21:51 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::string name1;
	std::string name2;

	std::cout << "insert a cucciola name: ";
	std::cin >> name1;
	std::cout << std::endl;
	ClapTrap c1(name1);

	std::cout << "insert a cucciola name (she will die): ";
	std::cin >> name2;
	std::cout << std::endl;
	ClapTrap c2(name2);

	for(int i = 0; i <= 11; i++)
	{
		c1.attack("shrek");
		c2.takeDamage(2);
		c1.beRepaired(1);
	}
	return(0);
}
