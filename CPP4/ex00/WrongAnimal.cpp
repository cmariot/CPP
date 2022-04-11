/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:52:54 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 12:24:37 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
WrongAnimal::WrongAnimal(void): type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
WrongAnimal const &	WrongAnimal::operator = (WrongAnimal const & rhs)
{
	type = rhs.type;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* Coucou *" << std::endl;
}
