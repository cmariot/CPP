/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:24:46 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 14:50:06 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
template <typename T>
Array<T>::Array(void) : _size(0)
{
	std::cout << "Array default constructor called." << std::endl;
	this->_array = new T [0];
	return ;
}

//Constructeur par copie
template <typename T>
Array<T>::Array(Array const & copy)
{
	//std::cout << "Array copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
template <typename T>
Array<T>::~Array(void)
{
	//std::cout << "Array destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
template <typename T>
Array<T> const &	Array<T>::operator = (Array const & rhs)
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


