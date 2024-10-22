/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 15:20:37 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-22 15:20:37 by raviolotto       ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#include "Function.hpp"

int main(){
	std::srand(static_cast<unsigned>(std::time(0)));

	Base* p = generate();
	std::cout << "Identifying using pointer:" << std::endl;
	identify(p);
	std::cout << "Identifying using reference:" << std::endl;
	identify(*p);

	delete p;
	return 0;
}