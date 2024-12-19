/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:09:24 by jacopo            #+#    #+#             */
/*   Updated: 2024/12/19 18:20:42 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define  EASYFIND_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void easyfind(T& container, int toFind){
    typename T::iterator value = std::find(container.begin(), container.end(), toFind);
    if(value != container.end())
        std::cout << "number: "<< toFind << " are inside the container" << std::endl;
    else
        throw std::exception();
}

#endif