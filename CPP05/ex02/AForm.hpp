/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:52:27 by jcardina          #+#    #+#             */
/*   Updated: 2024/10/01 13:22:29 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		const int _gradeToSign;
		const int _gradeToExecute;
		bool _status;

	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm& orig);
		AForm& operator=(const AForm& rhs);
		virtual ~AForm();

		std::string getName()			const;
		bool		getStatus()			const;
		int			getGradeToSign()	const;
		int			getGradeToExecute()	const;
		void		beSigned(Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & bureaucrat) const = 0;

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
		class NotSignedExeption : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("form not signed");
				}
		};
};

std::ostream& operator<<(std::ostream& o, AForm& rhs);



#endif
