/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 14:20:07 by jcardina          #+#    #+#             */
/*   Updated: 2024-11-01 14:20:07 by jcardina         ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <string>

int main() {
	::Array<int> intArray(5);

	for (unsigned int i = 0; i < intArray.size(); i++) {
		intArray[i] = i + 1;
	}

	std::cout << "Valori nell'array di interi: ";
	for (unsigned int i = 0; i < intArray.size(); i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	Array<int> copiedArray = intArray;
	std::cout << "Valori nell'array copiato: ";
	for (unsigned int i = 0; i < copiedArray.size(); i++) {
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;

	copiedArray[3] = 100;
	Array<int> copiedCopiedArrey(copiedArray);
	
	std::cout << "Valori nell'array con costruttore copia: ";
	for (unsigned int i = 0; i < copiedCopiedArrey.size(); i++) {
		std::cout << copiedCopiedArrey[i] << " ";
	}
	std::cout << std::endl;

	try {
		std::cout << "Tentativo di accesso a un indice non valido: " << intArray[9] << std::endl;
	} catch (const Array<int>::memoryexception& e) {
		std::cerr << "Eccezione: " << e.what() << std::endl;
	}

	Array<std::string> stringus(5);
	for(unsigned int i = 0; i < 5; i++){
		stringus[i] = "abc";
	}
	for(unsigned int i = 0; i < 5; i++){
		std::cout << stringus[i] << " ";
	}
	std::cout << std::endl;

	Array<char> chars(5);
	for(unsigned int i = 0; i < 5; i++){
		chars[i] = 'a';
	}
	Array<int> empty;

	empty = intArray;
	for(unsigned int i = 0; i < 5; i++){
		std::cout << empty[i] << " ";
	}

	
	return 0;
}