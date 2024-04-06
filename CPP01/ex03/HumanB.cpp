/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:37:52 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 19:15:03 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::setWeapon(Weapon* newWeapon)
{
	this->_weapon = newWeapon;
}

void HumanB::attack()
{
	if (this->_weapon != NULL)
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << _name << " can only run away " << std::endl;
}

HumanB::~HumanB()
{
}
