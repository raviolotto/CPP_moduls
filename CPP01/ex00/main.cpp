/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:31:35 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 15:46:30 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;

	std::cout << "let's create 3 zombies zii" << std::endl;
	std::cout << "choose a name: ";
	std::cin >> name;
	Zombie z1(name);

	std::cout << "give me another name for an heap zombie: ";
	std::cin >> name;
	Zombie *z2 = newZombie(name);
	z2->announce();

	std::cout << "a random name pls: ";
	std::cin >> name;
	randomChump(name);
	delete(z2);
	return(0);
}
