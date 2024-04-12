/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:32:43 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 11:21:41 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "an Animal is born" << std::endl;
}

Animal::~Animal()
{
	std::cout << "an Animal is dead" << std::endl;
}
Animal::Animal(std::string name)
{
	this->type = name;
	std::cout <<this->type << " Animal is born" << std::endl;
}
Animal::Animal(const Animal& rhs)
{
	this->type = rhs.type;
	std::cout <<this->type << " Animal is cloned" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if(this != &rhs)
		this->type = rhs.type;
	std::cout << "operator = called" << std::endl;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << "indistinct animal sounds" << std::endl;
}


