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
#include "Array.hpp"  // Assicurati di includere il file di intestazione della tua classe Array

int main() {
    // Crea un array di interi con dimensione 5
    Array<int> intArray(5);

    // Inizializza l'array
    for (unsigned int i = 0; i < intArray.size(); i++) {
        intArray[i] = i + 1;  // Popola l'array con valori da 1 a 5
    }

    // Stampa i valori dell'array
    std::cout << "Valori nell'array di interi: ";
    for (unsigned int i = 0; i < intArray.size(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Testa il costruttore di copia
    Array<int> copiedArray = intArray;
    std::cout << "Valori nell'array copiato: ";
    for (unsigned int i = 0; i < copiedArray.size(); i++) {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

    // Testa il caso di accesso non valido
    try {
        std::cout << "Tentativo di accesso a un indice non valido: " << intArray[5] << std::endl;
    } catch (const Array<int>::memoryexception& e) {
        std::cerr << "Eccezione: " << e.what() << std::endl;
    }

	return 0;
}