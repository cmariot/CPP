/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:49:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 10:07:41 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
Animal::Animal(Animal const & copy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Animal const &	Animal::operator = (Animal const & rhs)
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

std::string	Animal::get_type(void) const
{
	return (this->type);
}
