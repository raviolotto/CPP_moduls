/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Function.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 14:51:16 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-22 14:51:16 by raviolotto       ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#include "Function.hpp"

Base* generate(void){
	int randomValue = std::rand() % 3;
	switch (randomValue)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	default:
		return NULL;
	}
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "is A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "is B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "is C" << std::endl;
	else
		std::cout << "what is this??" << std::endl;
}


void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "is A" << std::endl;
	} catch (std::exception& e) {
		try {
			dynamic_cast<B&>(p);
			std::cout << "is B" << std::endl;
		} catch (std::exception& e) {
			try {
				dynamic_cast<C&>(p);
				std::cout << "is C" << std::endl;
			} catch (std::exception& e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}