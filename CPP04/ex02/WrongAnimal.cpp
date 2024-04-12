/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:51:54 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 12:16:16 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "a wrong beast show itself" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
	this->type = name;
	std::cout << "this is not a cat be carefull" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "luckly the beast is dead now :(" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "you ear a crazy srceam 'AGUBABALOOO'" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if(this != &rhs)
		this->type = rhs.type;
	std::cout << "operator = called" << std::endl;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
	this->type = rhs.type;
	std::cout <<this->type << " Animal is cloned" << std::endl;
}

