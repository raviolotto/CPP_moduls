/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:49:48 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 13:32:13 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "brain created" << std::endl;
}

Brain::Brain(const Brain & rhs)
{
	*this = rhs;
}

Brain::~Brain()
{
	std::cout << "Brain destructed" << std::endl;
}

Brain& Brain::operator=( const Brain& src )
{
	if ( this != &src )
	{
		for ( int i = 0; i < 100; i++ )	{
			this->ideas[i] = src.ideas[i];
		}
	}
	return *this;
}
