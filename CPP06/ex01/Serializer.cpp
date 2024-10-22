/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 14:02:10 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-22 14:02:10 by raviolotto       ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer& orig){
	(void)orig;
}

Serializer& Serializer::operator=(const Serializer& rhs){
	(void)rhs;
	return(*this);
}

uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t ptr){
	return (reinterpret_cast<Data*>(ptr));
}

Serializer::~Serializer(){}


