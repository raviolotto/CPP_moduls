/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 11:25:00 by jcardina          #+#    #+#             */
/*   Updated: 2024-10-30 11:25:00 by jcardina         ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	{
		int arr[] = {1 ,2, 3, 4};
		::iter(arr, 4, ::stamp);
		std::cout << std::endl;
		::iter(arr, 4, ::add);
		::iter(arr, 4, ::stamp);
		std::cout << std::endl;
	}
	{
		char arr[] = {'a', 'b', 'c', 'd'};
		::iter(arr, 4, ::stamp);
		std::cout << std::endl;
		::iter(arr, 4, ::add);
		::iter(arr, 4, ::stamp);
		std::cout << std::endl;
	}
	{
		std::string arr[] = {"abc", "def", "ghi", "jkl"};
		::iter(arr, 4, ::stamp);
		std::cout << std::endl;
		::iter(arr, 4, ::add);
		::iter(arr, 4, ::stamp);
		std::cout << std::endl;
	}
	return 0;
}