/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:31:08 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 13:16:19 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat")
{
	std::cout << this->type << " constructor MIAOOO" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << this->type << " destructor RONF RONF" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "MIAOOOO!" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal("Cat")
{
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
}

Cat& Cat::operator=( const Cat& src )
{
	if (this != &src)
	{
		this->type = src.type;
		this->_brain = new Brain( *src._brain );
	}
	return *this;
}
