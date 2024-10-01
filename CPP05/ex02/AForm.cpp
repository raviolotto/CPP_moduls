/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:07:08 by jacopo            #+#    #+#             */
/*   Updated: 2024/10/01 13:05:28 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("genericForm"), _gradeToSign(1), _gradeToExecute(1), _status(false){

}

AForm::~AForm(){

}

AForm::AForm(const AForm& orig): _name(orig.getName()), _gradeToSign(orig.getGradeToSign()), _gradeToExecute(orig.getGradeToExecute()), _status(orig.getStatus()){

}


AForm::AForm(std::string name, int gToSign, int gToExecute): _name(name),_gradeToSign(gToSign), _gradeToExecute(gToExecute), _status(false){
	if(gToSign > 150)
		throw AForm::GradeTooLowException();
	else if(gToSign < 1)
		throw AForm::GradeTooHighException();
	if (gToExecute > 150)
		throw AForm::GradeTooLowException();
	else if (gToExecute < 1)
		throw AForm::GradeTooLowException();
}

void AForm::beSigned (Bureaucrat& bureaucrat)
{
	if(bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_status = true;
}


//get function
std::string AForm::getName() const
{
	return this->_name;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

bool AForm::getStatus() const
{
	return this->_status;
}

//overload

AForm& AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
		this->_status = rhs._status;
	return *this;
}

std::ostream& operator<<(std::ostream& o, AForm& rhs){
	o <<"form:" << rhs.getName() << " grade to sign: " << rhs.getGradeToSign() << " grade to execute: " << rhs.getGradeToExecute() << " status: " << rhs.getStatus();
	return o;
}
