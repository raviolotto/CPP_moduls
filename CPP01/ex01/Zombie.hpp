/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:56:46 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 16:19:22 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _Zname;
public:
	Zombie();
	~Zombie();
	void	setName(std::string name);
	void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
