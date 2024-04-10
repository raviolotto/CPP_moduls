/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:01:22 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/10 12:40:32 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " la cucciola is ready to dance" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
	std::cout << rhs._name << "'s outfit was copied" << std::endl;
	this->_name = rhs._name;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDamage = rhs._attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " went to bed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->_hitPoints <= 0)
	{
		std::cout << this->_name  << " is dead" << std::endl;
		return;
	}
	else if(this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "cucciola " << this->_name << " attaks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " is too tired for a cat fight" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_hitPoints <= 0)
		std::cout << "stop raging on " << this->_name << std::endl;
	else if(this->_hitPoints <= static_cast<int>(amount))
	{
		this->_hitPoints -= amount;
		std::cout << "oh no cucciola " << this->_name << " is to weak to keep living" << std::endl ;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " broke a nail. Now she has " << this->_hitPoints << " hitPoints" << std::endl ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_hitPoints <= 0)
	{
		std::cout << this->_name  << " is dead" << std::endl;
		return;
	}
	if(this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << " is licking her wounds" << std::endl;
		this->_hitPoints += amount;
	}
	else
		std::cout << this->_name << " is too tired even to heal" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}
