/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:16:27 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 15:09:28 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5),  _target(target)
{
	//std::cout << "PresidentialPardonForm default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : Form("PresidentialPardonForm", 25, 5)
{
	//std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	//std::cout << "PresidentialPardonForm destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
PresidentialPardonForm const &	PresidentialPardonForm::operator = (PresidentialPardonForm const & rhs)
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (makeVerif(executor.getGrade(), getExecutionGrade()) == 0)
	{
		std::cout << executor.getName() << " has been pardoned by the president Zaphod Beeblebrox." << std::endl;
	}
}
