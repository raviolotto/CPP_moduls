/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:02:26 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/11 12:21:02 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_attackDamage = 20;
	this->_energyPoints = 50;

	std::cout << "Maranza " << this->_name << " wears his fanny pack." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "maranza " << this->_name << " takes off his shoes" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->_hitPoints <= 0)
	{
		std::cout << this->_name  << " is dead" << std::endl;
		return;
	}
	else if(this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "maranza " << this->_name << " attaks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " is too tired for drive his booster" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "maranza " << this->_name << " is now in Gate keeper mode." << std::endl;
}




