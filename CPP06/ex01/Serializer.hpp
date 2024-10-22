/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 13:42:46 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-22 13:42:46 by raviolotto       ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
public:
	Serializer();
	Serializer(const Serializer& orig);
	Serializer& operator=(const Serializer& rhs);
	~Serializer();

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t ptr);
};

#endif