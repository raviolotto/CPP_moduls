/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:42:41 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/11 15:12:37 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;

	std::cout << this->_name << " diamond is born" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " diamond is unbreakable?" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond: " << this->_name << std::endl;
	std::cout << "ClapTrap: " << this->ClapTrap::_name << std::endl;
}
