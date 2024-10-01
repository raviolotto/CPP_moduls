/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:27:31 by jcardina          #+#    #+#             */
/*   Updated: 2024/10/01 13:35:54 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& orig);
	~ShrubberyCreationForm();
	std::string getTarget() const;

	ShrubberyCreationForm& operator=(ShrubberyCreationForm& rhs);
	void execute(const Bureaucrat& bureaucrat) const;
};
#endif
