/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:46:28 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 18:51:54 by jcardina         ###   ########.fr       */
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
