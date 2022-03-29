/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:33 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:24:37 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
C::C(void)
{
	//std::cout << "C default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
C::C(C const & copy)
{
	//std::cout << "C copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
C::~C(void)
{
	//std::cout << "C destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
C const &	C::operator = (C const & rhs)
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


