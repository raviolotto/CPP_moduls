/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:28:51 by jacopo            #+#    #+#             */
/*   Updated: 2024/09/26 15:35:23 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string	_name;
	int			_grade;
public:
	Bureaucrat();
	Bureaucrat(int grade);
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& orig);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat();

	std::string	getName();
	int			getGrade();
	void		promotion();
	void 		downgrading();
	void		signForm(Form& form);



	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("grade too low");
			}
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("grade too High");
			}
	};
};

std::ostream&	operator<<( std::ostream& o, Bureaucrat& rhs );

#endif
