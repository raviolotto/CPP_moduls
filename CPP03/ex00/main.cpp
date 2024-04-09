/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:36:50 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/09 20:41:36 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::string name1;
	std::string name2;

	std::cout << "insert a cucciola name: ";
	std::cin >> name1;
	std::cout << std::endl;
	ClapTrap c1(name1);

	std::cout << "insert a cucciola name: ";
	std::cin >> name2;
	std::cout << std::endl;
	ClapTrap c2(name2);
}
