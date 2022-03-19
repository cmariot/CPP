/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:53:06 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 13:06:08 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
	return ;
}

//Constructeur par copie
WrongCat::WrongCat(WrongCat const & copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
WrongCat const &	WrongCat::operator = (WrongCat const & rhs)
{
	this->type = rhs.type;
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

void	WrongCat::makeSound(void) const
{
	std::cout << "* WrongMiaou *" << std::endl;
}
