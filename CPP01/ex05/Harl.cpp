/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:13:13 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/08 13:25:51 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std ::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::warning(void)
{
	std ::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}
void Harl::error(void)
{
	std ::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

Harl::Harl()
{
	this->funcs[0] = &Harl::debug;
	this->funcs[1] = &Harl::info;
	this->funcs[2] = &Harl::warning;
	this->funcs[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::complain( std:: string level ) {
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++ ;
	if (i < 4)
		(this->*funcs[i])();
}



