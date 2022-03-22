/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:15:51 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 17:17:00 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137),  _target(target)
{
	//std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : Form("ShrubberyCreationForm", 145, 137)
{
	//std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << "ShrubberyCreationForm destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
ShrubberyCreationForm const &	ShrubberyCreationForm::operator = (ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}


/***********************************************/
/*             OPERATEURS ARITHMETIQUES        */
/***********************************************/

/***********************************************/
/*            OPERATEURS D'INCREMENTATION      */
/***********************************************/

/***********************************************/
/*             OPERATEURS DE COMPARAISON       */
/***********************************************/

/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (makeVerif(executor.getGrade(), getExecutionGrade()) == 0)
	{
		//execution
	}
}
