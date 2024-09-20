/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:28:51 by jacopo            #+#    #+#             */
/*   Updated: 2024/09/18 16:26:21 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>


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
