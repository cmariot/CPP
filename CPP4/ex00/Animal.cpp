/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:49:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/07 14:41:31 by cmariot          ###   ########.fr       */
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
	this->type = rhs.type;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "* Animal sound *" << std::endl;
}
