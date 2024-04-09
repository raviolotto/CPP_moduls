/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:01:22 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/09 20:51:18 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << this->_name << "la cucciola is ready to dance" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
	std::cout << rhs._name << "'s outfit was copied" << std::endl;
	this->_name = rhs._name;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << "went to bed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "cucciola " << this->_name << " attaks " << target << ", causing" << this->_attackDamage << "points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << "is too tired for a cat fight" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
