/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jcardina@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:52:47 by jacopo            #+#    #+#             */
/*   Updated: 2024/06/02 13:12:06 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// Testing default constructor
		Bureaucrat defaultBureaucrat;
		std::cout << defaultBureaucrat << std::endl;

	// Testing parameterized constructor with name
		Bureaucrat namedBureaucrat("Alice");
		std::cout << namedBureaucrat << std::endl;

	// Testing parameterized constructor with name and grade
		Bureaucrat fullBureaucrat("Bob", 50);
		std::cout << fullBureaucrat << std::endl;

	// Testing parameterized constructor with grade
		Bureaucrat gradeBureaucrat(100);
		std::cout << gradeBureaucrat << std::endl;
	// Testing promotion
		fullBureaucrat.promotion();
		std::cout << "After promotion: " << fullBureaucrat << std::endl;

    // Testing downgrading
    	fullBureaucrat.downgrading();
    	std::cout << "After downgrading: " << fullBureaucrat << std::endl;

    // Testing exception for too high grade
		try {
			Bureaucrat tooHigh("Charlie", 0);
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

	// Testing exception for too low grade
		try {
			Bureaucrat tooLow("Dave", 151);
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

	// Testing promotion exception
		try {
			Bureaucrat highBureaucrat("Eve", 1);
			highBureaucrat.promotion();
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

	// Testing downgrading exception
		try {
			Bureaucrat lowBureaucrat("Frank", 150);
			lowBureaucrat.downgrading();
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	return 0;
}
