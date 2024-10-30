/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 09:54:49 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-30 09:54:49 by raviolotto       ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WHATEVER_HPP)
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b){
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T& a, T& b){
	if(a < b)
		return(a);
	else
		return(b);
}

template<typename T>
T max(T& a, T& b){
	if(a > b)
		return a;
	else
		return b;
}



#endif // WHATEVER_HPP


