/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:33:52 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/11 12:53:39 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "tekno ranger " << this->_name << " buy a bag" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "the sun is rising " << this->_name << " is time to go to sleep" <<std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if(this->_hitPoints <= 0)
	{
		std::cout << this->_name  << " is dead" << std::endl;
		return;
	}
	else if(this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "tekno ranger " << this->_name << " attaks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " is too tired to move his feet" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << this->_name << " are screeaming 'give me an high five pls'" << std::endl;
}


