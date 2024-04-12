/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:58:44 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 12:02:14 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("wrong cat")
{
	std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << this->type << " destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Meow?!!!!!!" << std::endl;
}
