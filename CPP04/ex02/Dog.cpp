/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:34:30 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 13:16:05 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
	this->_brain = new Brain();
	std::cout << this->type << " constructor SLURP" << std::endl;
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << this->type << " destructor GRRRRR" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "BAUUUUUU!" << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal( "Dog" )
{
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
}

Dog& Dog::operator=( const Dog& src )
{
	if (this != &src)
	{
		this->type = src.type;
		this->_brain = new Brain( *src._brain );
	}
	return *this;
}


