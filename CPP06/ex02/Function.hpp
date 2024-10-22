/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Function.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 14:38:19 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-22 14:38:19 by raviolotto       ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FUNCTIOM_HPP)
#define FUNCTIOM_HPP

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif // FUNCTIOM_HPP
