/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 18:38:31 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-01 18:38:31 by raviolotto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string RobotomyRequestForm::getTarget() const {
    return(_target);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target){

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& orig): AForm(orig), _target(orig.getTarget()){

}

RobotomyRequestForm::~RobotomyRequestForm(){

}

void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
    if(this->getStatus() == false){
        throw AForm::NotSignedExeption();
    }
    else if(bureaucrat.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    static int  i;
        if ( i % 2 == 0 )
            std::cout << "BZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
        i++;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
    if(this != &rhs)
        this->_target = rhs.getTarget();
    return(*this);
}