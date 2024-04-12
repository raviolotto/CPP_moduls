/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:22:36 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 11:14:39 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
	Animal(std::string name);
public:
	Animal();
	Animal(const Animal & rhs);
	Animal& operator=(const Animal & rhs);
	virtual ~Animal();

	virtual void makeSound(void) const;
	std::string getType(void) const;
};



#endif // MACRO
