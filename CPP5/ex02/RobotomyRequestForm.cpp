/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:16:11 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 17:16:37 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45),  _target(target)
{
	//std::cout << "RobotomyRequestForm default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : Form("RobotomyRequestForm", 72, 45)
{
	//std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	//std::cout << "RobotomyRequestForm destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
RobotomyRequestForm const &	RobotomyRequestForm::operator = (RobotomyRequestForm const & rhs)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (makeVerif(executor.getGrade(), getExecutionGrade()) == 0)
	{
		//execution
	}
}
