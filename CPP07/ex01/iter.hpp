/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 11:00:37 by jcardina          #+#    #+#             */
/*   Updated: 2024-10-30 11:00:37 by jcardina         ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ITER_HPP)
#define ITER_HPP

#include <iostream>


template <typename T>
void iter(T* arr, int lenght, void(*f)(T&)){
	int i = -1;
	while (++i < lenght)
		f(arr[i]);
}

template <typename T>
void stamp(T& value){
	std::cout << value << ", ";
}

template <typename T>
void add(T& value){
	value += 1;
}




#endif // ITER_HPP