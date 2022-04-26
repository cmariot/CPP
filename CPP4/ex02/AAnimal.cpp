/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:49:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 10:56:23 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
AAnimal::AAnimal(void) : type("AAnimal")
{
	std::cout << "AAnimal default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
AAnimal::AAnimal(AAnimal const & copy)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
AAnimal const &	AAnimal::operator = (AAnimal const & rhs)
{
	type = rhs.type;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

std::string	AAnimal::getType(void) const
{
	return (type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "* Animal sound *" << std::endl;
}
