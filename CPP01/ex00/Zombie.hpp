/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:56:46 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/06 15:27:06 by jcardina         ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();
	void	announce( void );
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
