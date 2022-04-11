/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:22:23 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 11:16:58 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Cure::Cure(void)
{
	//std::cout << "Cure default constructor called." << std::endl;
	_type = "cure";
	return ;
}

//Constructeur par copie
Cure::Cure(Cure const & copy)
{
	//std::cout << "Cure copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Cure::~Cure(void)
{
	//std::cout << "Cure destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Cure const &	Cure::operator = (AMateria const & rhs)
{
	_type = rhs.getType();
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

//Methode clone heritee de AMateria
AMateria* Cure::clone(void) const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}

//Methode use heritee de AMateria
void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
