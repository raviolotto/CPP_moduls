/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:46:28 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/11 10:56:36 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
}
Weapon::~Weapon()
{
}

void	Weapon::setType(std::string name)
{
	this->type = name;
}

const std::string& Weapon::getType(void)
{
	return this->type;
}
