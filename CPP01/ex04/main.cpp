/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:39:03 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 21:37:11 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "MySed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "looks like you insert a bad imput" << std::endl;
		std::cerr << "use this: ./rep <filename> <to_find> <replace>.";
		return (1);
	}
	else
	{
		MySed sev(av[1]);
		sev.replace(av[2], av[3]);
	}
	return (0);
}
