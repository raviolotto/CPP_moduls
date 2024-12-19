/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:25:58 by jacopo            #+#    #+#             */
/*   Updated: 2024/12/19 18:26:46 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main() {
    std::vector<int> numeri;
    numeri.push_back(10);
    numeri.push_back(20);
    numeri.push_back(30);
    numeri.push_back(40);
    numeri.push_back(50);

    try {
        easyfind(numeri, 30);
        easyfind(numeri, 60);
    } catch (const std::exception& e) {
        std::cerr << "Errore: Elemento non trovato" << std::endl; // Messaggio di errore hardcoded
    }

    return 0;
}