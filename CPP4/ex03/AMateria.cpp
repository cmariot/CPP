/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:21:47 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/07 14:55:34 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
AMateria::AMateria(void) : _type("materia")
{
	//std::cout << "AMateria default constructor called." << std::endl;
	return ;
}

//Constructeur par type
AMateria::AMateria(std::string const & type) : _type(type)
{
	//std::cout << "AMateria constructor by type called." << std::endl;
	return ;
}

//Constructeur par copie
AMateria::AMateria(AMateria const & copy)
{
	//std::cout << "AMateria copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
AMateria::~AMateria(void)
{
	//std::cout << "AMateria destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
AMateria const &	AMateria::operator = (AMateria const & rhs)
{
	//std::cout << "Affectation operator (=) called" << std::endl;
	_type = rhs._type;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

std::string const & AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* materia used on " << target.getName() << " *" << std::endl;
}
