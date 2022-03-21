/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:22:23 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 18:40:19 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Ice::Ice(void)
{
	//std::cout << "Ice default constructor called." << std::endl;
	this->_type = "ice";
	return ;
}

//Constructeur par copie
Ice::Ice(Ice const & copy)
{
	//std::cout << "Ice copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Ice::~Ice(void)
{
	//std::cout << "Ice destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Ice const &	Ice::operator = (AMateria const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

//Methode clone heritee de AMateria
AMateria* Ice::clone(void) const
{
	AMateria *clone = new Ice(*this);
	return (clone);
}

//Methode use heritee de AMateria
void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
