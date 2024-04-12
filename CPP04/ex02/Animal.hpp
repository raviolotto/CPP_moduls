/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:22:36 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 18:37:21 by jcardina         ###   ########.fr       */
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
	Animal();
	Animal(const Animal & rhs);
public:
	Animal& operator=(const Animal & rhs);
	virtual ~Animal();

	virtual void makeSound(void) const =0;
	std::string getType(void) const;
};



#endif // MACRO
