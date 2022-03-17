/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:13:47 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 12:17:24 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
DiamondTrap const &	DiamondTrap::operator = (DiamondTrap const & rhs)
{
	(void)rhs;
	//this->_var = rhs._var;
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


