/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:38:38 by jacopo            #+#    #+#             */
/*   Updated: 2024/10/01 13:00:25 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//const/dis

Bureaucrat::Bureaucrat(){
	this->_name = "lerry";
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& orig){
	this->_name = orig._name;
	this->_grade = orig._grade;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name){
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if(grade > 150)
		throw GradeTooLowException();
	else if(grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(int grade) {
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else {
		this->_grade = grade;
		this->_name = "lerry";
	}
}

Bureaucrat::~Bureaucrat(){
}

//basic function

std::string Bureaucrat::getName()
{
	return this->_name;
}

int Bureaucrat::getGrade()
{
	return this->_grade;
}

void Bureaucrat::promotion(){
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::downgrading(){
	if((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signForm(AForm& form)
{
	try{
		form.beSigned(*this);
		std::cout << "signed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e){
		std::cout << this->_name << " is too dumb to sign form " << form.getName() << " cause " << e.what() << std::endl;
	}
}

//overload

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

std::ostream& operator<<( std::ostream& o, Bureaucrat& rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

