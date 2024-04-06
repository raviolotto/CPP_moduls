/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:05:55 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 15:45:56 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_Zname = name;
}

Zombie::~Zombie()
{
	std::cout << _Zname << " is dead (again)" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << _Zname << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
