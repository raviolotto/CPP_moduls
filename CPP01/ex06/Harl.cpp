/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:13:13 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/08 14:00:05 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Ora è tutto orco" << std::endl;
	std ::cout <<std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std ::cout << "Gli orchi sono come le cipolle. " <<std::endl;
	std ::cout <<std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std ::cout << "Mi piace quel masso. È un bel masso" <<std::endl;
	std ::cout <<std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std ::cout << "No, non i bottoni… non i miei bottoni di gomma!" <<std::endl;
	std ::cout <<std::endl;
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
	while(i != -1)
	{
		switch (i)
		{
			case	0:
			this->debug();
			i = 1;
			break ;
		case	1:
			this->info();
			i = 2;
			break ;
		case	2:
			this->warning();
			i = 3;
			break ;
		case	3:
			this->error();
			i = -1;
			break ;
		default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		i = -1;
		}
	}
}

//swich osceno per colpa di -Werror e dello standard c++98



