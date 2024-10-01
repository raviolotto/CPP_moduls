/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:52:27 by jcardina          #+#    #+#             */
/*   Updated: 2024/09/26 15:43:08 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const int _gradeToSign;
		const int _gradeToExecute;
		bool _status;

	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& orig);
		Form& operator=(const Form& rhs);
		~Form();

		std::string getName()			const;
		bool		getStatus()			const;
		int			getGradeToSign()	const;
		int			getGrateToExecute()	const;
		void		beSigned(Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("grade too low");
				}
		};
};

std::ostream& operator<<(std::ostream& o, Form& rhs);



#endif
