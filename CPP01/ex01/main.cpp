/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:31:35 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 16:26:42 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;
	int	number;

	std::cout << "let's create N zombies zii" << std::endl;
	std::cout << "choose a name: ";
	std::cin >> name;
	std::cout << "choose a number: ";
	std::cin >> number;

	Zombie *boss = zombieHorde(number, name);
	for(int i = 0; i < number; i++)
		boss[i].announce();

	delete [] boss;
	return(0);
}
