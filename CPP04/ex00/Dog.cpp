/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:34:30 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 11:36:09 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
	std::cout << this->type << " constructor SLURP" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << this->type << " destructor GRRRRR" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "BAUUUUUU!" << std::endl;
}
