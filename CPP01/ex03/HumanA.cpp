/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:21:18 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 19:02:07 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {
}


HumanA::~HumanA()
{
}

void HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}
