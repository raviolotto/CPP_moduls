/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:36:50 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/11 15:11:51 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::string name1;
	std::string name2;
	std::string name3;

	std::cout << "insert a maranza name: ";
	std::cin >> name1;
	std::cout << std::endl;
	ScavTrap c1(name1);

	std::cout << "insert a tekno name ";
	std::cin >> name2;
	std::cout << std::endl;
	FragTrap c2(name2);

	std::cout << "insert a diamond name ";
	std::cin >> name3;
	std::cout << std::endl;
	DiamondTrap c3(name3);

	c1.attack("shrek");
	c2.takeDamage(2);
	c1.beRepaired(1);
	c1.guardGate();
	c2.highFiveGuys();
	c3.attack("king lerri");
	c3.whoAmI();

	return(0);
}
