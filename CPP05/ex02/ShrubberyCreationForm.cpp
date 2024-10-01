/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviolotto <raviolotto@student.42.fr>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 15:44:08 by raviolotto        #+#    #+#             */
/*   Updated: 2024-10-01 15:44:08 by raviolotto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


std::string ShrubberyCreationForm::getTarget() const{
    return(_target);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationform", 147, 137), _target(target){

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& orig): AForm(orig), _target(orig.getTarget()){

}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}


void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
    if(this->getStatus() == false)
        throw AForm::NotSignedExeption();
    else if(bureaucrat.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::ofstream file((this->_target + "_shrubbery").c_str());
    file << "                      ___" << std::endl;
    file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    file << "             ,-'          __,,-- \\" << std::endl;
    file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file << "     (     ,-'                  `." << std::endl;
    file << "      `._,'     _   _             ;" << std::endl;
    file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    file << "                \"Hb HH dF" << std::endl;
    file << "                 \"HbHHdF" << std::endl;
    file << "                  |HHHF" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  dHHHb" << std::endl;
    file << "                .dFd|bHb.               o" << std::endl;
    file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << "##########################################" << std::endl;
    file.close();
}