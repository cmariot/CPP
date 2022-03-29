/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:12 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:24:17 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
A::A(void)
{
	//std::cout << "A default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
A::A(A const & copy)
{
	//std::cout << "A copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
A::~A(void)
{
	//std::cout << "A destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
A const &	A::operator = (A const & rhs)
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


