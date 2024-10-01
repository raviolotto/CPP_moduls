/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:07:08 by jacopo            #+#    #+#             */
/*   Updated: 2024/09/26 16:03:36 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("genericForm"), _gradeToSign(1), _gradeToExecute(1), _status(false){

}

Form::~Form(){

}

Form::Form(const Form& orig): _name(orig.getName()), _gradeToSign(orig.getGradeToSign()), _gradeToExecute(orig.getGrateToExecute()), _status(orig.getStatus()){

}


Form::Form(std::string name, int gToSign, int gToExecute): _name(name),_gradeToSign(gToSign), _gradeToExecute(gToExecute), _status(false){
	if(gToSign > 150)
		throw Form::GradeTooLowException();
	else if(gToSign < 1)
		throw Form::GradeTooHighException();
	if (gToExecute > 150)
		throw Form::GradeTooLowException();
	else if (gToExecute < 1)
		throw Form::GradeTooLowException();
}

void Form::beSigned (Bureaucrat& bureaucrat)
{
	if(bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_status = true;
}


//get function
std::string Form::getName() const
{
	return this->_name;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGrateToExecute() const
{
	return this->_gradeToExecute;
}

bool Form::getStatus() const
{
	return this->_status;
}

//overload

Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		this->_status = rhs._status;
	return *this;
}

std::ostream& operator<<(std::ostream& o, Form& rhs){
	o <<"form:" << rhs.getName() << " grade to sign: " << rhs.getGradeToSign() << " grade to execute: " << rhs.getGrateToExecute() << " status: " << rhs.getStatus();
	return o;
}
