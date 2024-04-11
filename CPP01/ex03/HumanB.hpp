/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:34:59 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/11 10:54:15 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon*			_weapon;
	std::string		_name;

public:
	HumanB(std::string name);
	void	setWeapon(Weapon& newWeapon);
	void	attack();
	~HumanB();
};


#endif
