/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:23 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:24:23 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
B::B(void)
{
	//std::cout << "B default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
B::B(B const & copy)
{
	//std::cout << "B copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
B::~B(void)
{
	//std::cout << "B destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
B const &	B::operator = (B const & rhs)
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


