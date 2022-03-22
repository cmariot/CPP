/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:52:11 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 14:20:22 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Form::Form(std::string name, int signature_grade, int execution_grade) : _name(name), _signed(0), _signature_grade(signature_grade), _execution_grade(execution_grade)
{
	//std::cout << "Form default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
Form::Form(Form const & copy) : _name(copy.getName()), _signed(copy.getSignature()), _signature_grade(copy.getSignatureGrade()), _execution_grade(copy.getExecutionGrade())
{
	//std::cout << "Form copy constructor called." << std::endl;
	return ;
}

//Destructeur
Form::~Form(void)
{
	//std::cout << "Form destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Form const &	Form::operator = (Form const & rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

//Operateur <<
std::ostream &	operator << (std::ostream & output, Form const & rhs)
{
	output << "Form: " << rhs.getName();
	output << " - Signed: "; 
	if (rhs.getSignature() == 1)
		output << "true";
	else
		output << "false";
	output << " - Signature grade required: " << rhs.getSignatureGrade();
	output << " - Execution grade required: " << rhs.getExecutionGrade();
	return (output);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

std::string		Form::getName(void) const
{
	return (this->_name);
}

bool			Form::getSignature(void) const
{
	return (this->_signed);
}

int				Form::getSignatureGrade(void) const
{
	return (this->_signature_grade);
}

int				Form::getExecutionGrade(void) const
{
	return (this->_execution_grade);
}

void	Form::beSigned(Bureaucrat *bureaucrat)
{
	try
	{
		if (bureaucrat->getGrade() <= this->getSignatureGrade())
		{
			bureaucrat->signForm(this);
		}
		else
		{
			throw Form::GradeTooLowException();
		}
	}
	catch (Form::GradeTooLowException & exception)
	{
		std::cout << exception.what() << std::endl;
		return ;
	}
}

void	Form::setSignature(void)
{
	this->_signed = 1;
}
