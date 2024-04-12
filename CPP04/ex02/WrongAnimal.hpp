/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:48:47 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 12:10:57 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
protected:
	std::string type;
	WrongAnimal(std::string name);
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & rhs);
	WrongAnimal& operator=(const WrongAnimal & rhs);
	~WrongAnimal();

	void makeSound(void) const;
	std::string getType(void) const;
};

#endif
