/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 19:22:24 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-01 19:22:24 by raviolotto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string PresidentialPardonForm::getTarget() const{
	return(_target);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target){

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& orig): AForm(orig), _target(orig.getTarget()){

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
	if(this != &rhs)
		this->_target = rhs.getTarget();
	return(*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const {
	if(this->getStatus() == false){
        throw AForm::NotSignedExeption();
    }
    else if(bureaucrat.getGrade() > this->getGradeToExecute()){
		throw AForm::GradeTooLowException();
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}