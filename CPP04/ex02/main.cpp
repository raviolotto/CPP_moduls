/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:44:13 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/12 18:39:05 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "ANIMAL" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	std::cout << "WRONGANIMAL" << std::endl;

	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
	std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
	wrong->makeSound();
	wrongCat->makeSound();

	delete wrong;
	delete wrongCat;

	std::cout << std::endl << std::endl;
	std::cout << "OVERLOAD TEST" << std::endl;

	Dog basic;
	{
		Dog tmp = basic;
		Dog tmp2(tmp);
	}

	std::cout << std::endl << std::endl;
	std::cout << "ANIMAL ARRAY" << std::endl;

	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for ( int i = 0; i < 4; i++ ) {
		delete animals[i];
	}

return 0;
}
