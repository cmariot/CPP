/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/16 19:24:17 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
ScavTrap::ScavTrap(void)
{
	//std::cout << "ScavTrap default constructor called." << std::endl
	return ;
}

//Constructeur par copie
ScavTrap::ScavTrap(ScavTrap const & copy)
{
	//std::cout << "ScavTrap copy constructor called." << std::endl
	*this = copy;
	return ;
}

//Destructeur
ScavTrap::~ScavTrap(void)
{
	//std::cout << "ScavTrap destructor called." << std::endl
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
ScavTrap const &	ScavTrap::operator = (ScavTrap const & rhs)
{
	(void)rhs;
	//this->_name = rhs._name;
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


